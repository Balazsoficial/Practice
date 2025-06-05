//
// Created by Balazsoficial on 2025. 06. 02..
//
#include <iostream>
#include <cpr/cpr.h>
#include <nlohmann/json.hpp>
#include <filesystem>
using json = nlohmann::json;
using namespace  std;
int main(){

                    //  cpr::Parameters{{"hello", "world"}});

    //std::cout << r.url << std::endl; // http://www.httpbin.org/get?hello=world
   // std::cout << r.text << std::endl;
    int iterations;
    string apikey;
    cout << "Api kulcs:" ;
    cin >> apikey;
    cout << "hany kep kell?" << endl;
    cin >> iterations;
    for (int i = 0; i < iterations; i++) {

        cpr::Response r = cpr::Get(cpr::Url{"https://api.nasa.gov/planetary/apod?count=1&api_key="+apikey});

        filesystem::create_directory("D:/download/nasa");
        nlohmann::json j = json::parse(r.text);
        std::ofstream of("D:/download/nasa/"+to_string(i)+".jpg", std::ios::binary);
        cpr::Response x = cpr::Download(of, cpr::Url{j[0]["hdurl"]});
        if (x.status_code != 200) {
            cout << "There was an issue while downloading" << endl;
            std::cout << "http status code = " << x.status_code << std::endl << std::endl;
            _sleep(1000);
        }

        //std::cout << "http status code = " << x.status_code << std::endl << std::endl;

    }



}
