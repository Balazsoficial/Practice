//
// Created by Balazsoficial on 2025. 06. 02..
//

#include <iostream>
#include <cpr/cpr.h>
#include <nlohmann/json.hpp>
#include <filesystem>
#include <ctime>
using json = nlohmann::json;
using namespace  std;
const string appdata = getenv("APPDATA");
int iterations;
string apikey;
vector<string> key;

void Main_run(bool Api, bool amount);
int main(int argc,char * argv[]) {

    if (argc ==1) {
        cout << "Program is being run in cli mode" << endl;
        Main_run(false , false);
    }
    else if (argc == 2 && argv[1]=="-help") {
        cout << "Usage:" << endl;
        cout <<"program.exe <requested amount of pictures> <apikey>  or " << endl;
        cout <<"program.exe <requested amount of pictures>" << endl;
    }
    else if (argc == 2 && argv[1] != "-help") {
        iterations = atoi(argv[1]);
       Main_run(false , true);
    }
    else if (argc == 3 && argv[1] != "-help") {
        iterations = atoi(argv[1]);
        cout << iterations << endl;
        apikey = argv[2];
        Main_run(true , true);
    }
    else if (argc >3) {
        exit(0);
    }
}

void Main_run(bool Api, bool amount) {

    setlocale(LC_ALL, "");
    filesystem::create_directory(appdata+"/Balazsoficial");
    filesystem::create_directory(appdata+"/Balazsoficial/Nasa");
    filesystem::create_directory(appdata+"/Balazsoficial/Nasa/API");
    fstream apifile;
    apifile.open(appdata+"/Balazsoficial/Nasa/API/api.txt");
    if(!apifile.is_open()) {
        cout << "Error opening api file" << endl;
        exit(1);

    }
    string line;
    apifile.clear();
    apifile.seekg(0, ios::beg);
    while (apifile) {
        getline(apifile, line, '\n');
        if (line.empty())
        {}
        else
        key.push_back(line);
    }
    if (key.empty()) {
        apifile.clear();
        apifile.seekg(0, ios::beg);
        if (!Api){
            cout << "Yor API key:" ;
            cin >> apikey;
            apifile << apikey;
        }
        apifile << apikey;

    }
    else
        apikey = key[0];

    apifile.close();
    cout << "Using alredy availabe API key" << endl;
    if (!amount)
    { cout << "Amount of pictures you need?" << endl;
        cin >> iterations;}

    for (int i = 0; i < iterations; i++)
        {
        timespec ts;
        timespec_get(&ts, TIME_UTC);
        int name = ts.tv_nsec;
        //cout << name << endl;
        cpr::Response r = cpr::Get(cpr::Url{"https://api.nasa.gov/planetary/apod?count=1&api_key="+apikey});


        filesystem::create_directory(appdata+"/Balazsoficial/Nasa/Images");
        nlohmann::json j = json::parse(r.text);
        std::ofstream of(appdata+"/Balazsoficial/Nasa/Images/"+to_string( static_cast <int>(name))+".jpg", std::ios::binary);
        cpr::Response x = cpr::Download(of, cpr::Url{j[0]["hdurl"]});

        if (x.status_code != 200) {
            cout << "There was an issue while downloading" << endl;
            std::cout << "http status code = " << x.status_code << std::endl << std::endl;
           // _sleep(100);
        }

        cout << "Done with " << i+1 << " out of the " << iterations << " iterations!" << endl;

        //std::cout << "http status code = " << x.status_code << std::endl << std::endl;

    }





}


