//
// Created by Balazsoficial on 2025. 02. 03..
//
#include <iostream>
#include <iomanip>
using namespace std;
int main()
    {


  cout << "Hello World!\n"<< endl; //new line possible to use \n

        cout << "nice message!\n"<< endl<<flush;//flush


        cout << "Unformated text!\n"<< endl;
        cout << "Daniel" << " " << "Gray" <<" " << "25"<<endl;
        cout << "Stanley" << " " << "Woods" <<" " << "33"<<endl;
        cout << "Jordan" << " " << "Parker" <<" " << "45"<<endl;
        cout << "Joe" << " " << "Peters" <<" " << "27"<<endl;
        cout << endl;
        cout << "Formatted text!\n"<< endl;
        cout << setw(14)<< "Lastname" << setw(14)<< "Firstname"<<setw(10)<<"Age"<<endl;
        cout <<setw(14)<< "Daniel" <<setw(14)<< "Gray" <<setw(10)<< "25"<<endl;
        cout <<setw(14)<< "Stanley" << setw(14)<< "Woods" << setw(10)<<"33"<<endl;
        cout <<setw(14)<< "Jordan" <<setw(14)<< "Parker" <<setw(10)<< "45"<<endl;
        cout <<setw(14)<< "Joe" << setw(14)<< "Peters" << setw(10)<<"27"<<endl;
        cout << endl;
        //int a =2;
        // you can also use a variable setw(a);

        cout << left;
    cout << setw(14)<< "Lastname" << setw(14)<< "Firstname"<<setw(10)<<"Age"<<endl;
    cout <<setw(14)<< "Daniel" <<setw(14)<< "Gray" <<setw(10)<< "25"<<endl;
    cout <<setw(14)<< "Stanley" << setw(14)<< "Woods" << setw(10)<<"33"<<endl;
    cout <<setw(14)<< "Jordan" <<setw(14)<< "Parker" <<setw(10)<< "45"<<endl;
    cout <<setw(14)<< "Joe" << setw(14)<< "Peters" << setw(10)<<"27"<<endl;
    cout << endl;
    //left justified default:right


   cout << setfill('.');
    cout << setw(14)<< "Lastname" << setw(14)<< "Firstname"<<setw(10)<<"Age"<<endl;
    cout <<setw(14)<< "Daniel" <<setw(14)<< "Gray" <<setw(10)<< "25"<<endl;
    cout <<setw(14)<< "Stanley" << setw(14)<< "Woods" << setw(10)<<"33"<<endl;
    cout <<setw(14)<< "Jordan" <<setw(14)<< "Parker" <<setw(10)<< "45"<<endl;
    cout <<setw(14)<< "Joe" << setw(14)<< "Peters" << setw(10)<<"27"<<endl;
    //set fill character

    cout << endl;
    int pos_num =123;
    int neg_num =-123;
    cout << "Positive number: " << pos_num << endl;
    cout << "Negative number: " << neg_num << endl;
    cout << endl;
    cout << showpos;
    cout <<"Positive number: " << pos_num << endl;
    cout <<"Negative number: " << neg_num << endl;
    cout << noshowpos;
    cout << endl;
    cout <<"Positive number: " << pos_num << endl;
    cout <<"Negative number: " << neg_num << endl;
    cout << endl;

       //different number systems,
 int pos_int = 7126378;
 cout << uppercase;//set lowercase by default
 cout << "decimal number: " <<dec <<pos_int << endl;
 cout << "hexadecimal number: "<<hex << pos_int << endl;
 cout << "octal number: "<<oct<< pos_int << endl;

 //with floating point numbers you can change to scientific with cout<< scientific;
 //you can change the length of the displayed number wiith setprecision fe.: 12.0000->12.000000000
 double asd= 12;
 cout << asd << endl;
 cout << showpoint ; //shows the decimal point so it would be 12.0000 at whole numbers you can use noshowpoint to remove the 0 12.0->12
 cout << asd << endl;


        return 0;
    }