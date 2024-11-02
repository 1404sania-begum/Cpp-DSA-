#include<iostream>
using namespace std;
int main (){
    int a = 10, b = 5;

    // Arithmetic operators  (+, -, *, /, %)
    cout << "Sum is" << (a+b) << endl;
    cout << "Difference is " << (a-b) << endl;
    cout << "Multiply is " << (a*b) << endl;
    cout << "Divide is " << (5/2) << endl;      // does't gives points value so if we want points value use type cast
    cout << "Modulo is " << (a%b) << endl;

    //  want exact value with points
    cout << (5 / (double)2) << endl << endl;


    // Relational operators (> , >= , <, <=, ==, !=) ---->true[1] ya false[0]
    cout << (a>b) << endl;
    cout << (a>=b) << endl;
    cout << (a<b) << endl;
    cout << (a<=b) << endl;
    cout << (a==b) << endl;
    cout << (a!=b) << endl << endl;


    // Logical operators  (or ||, and &&, not !)
    cout << !(a<b) << endl;   // 10 < 5 - false[0]
    cout << ((a>b) || (b>a)) << endl;
    cout << ((a>b) && (b>a)) << endl;
    return 0;
}