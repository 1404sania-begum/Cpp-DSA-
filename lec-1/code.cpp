#include<iostream>
using namespace std;
int main (){
    int age = 25;                // 4 bytes
    char grade = 'A';           // 1 bytes
    float PI = 3.14f;          // 4 bytes
    bool isSafe = true;        // 1 bytes  (yes/No)
    double price = 100.99;    // 1 bytes

    cout << "int age "<< endl;
    cout << age << endl;
    cout << sizeof(age) << endl <<endl;  // sizeof = bytes

    cout << "char grade" << endl;
    cout << grade << endl;
    cout << sizeof(grade) << endl << endl;

    cout << "float PI" << endl;
    cout << PI << endl;
    cout << sizeof(PI) << endl << endl;

    cout << "bool isSafe"<< endl << endl;
    cout << isSafe<< endl << endl;

    cout << "double price " << endl;
    cout << price << endl;
    cout << sizeof(price) << endl << endl;

    string Kpop;
    cout << "Enter the Kpop Band Name :";  // for printing output
    cin >> Kpop;                          //for accessing input

    cout << "Band Name is : " <<  Kpop << endl;
    return 0;
}