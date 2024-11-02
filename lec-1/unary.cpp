#include<iostream>
using namespace std;
int main()
{
    // Increment operator
    int a = 10;
    int b = a++;    //kaam ; update ----> post inc
    cout << "b = " << b << endl;
    cout << "a = " << a << endl << endl;

    int a1 = 10;
    int b1 = ++a1;    // update ; kaam ---> pre inc 
    cout << "b1 = " << b1 << endl;
    cout << "a1 = " << a1 << endl << endl;


    // Decrement  operator
    int a2 = 10;
    int b2 = a2--;    //kaam ; update ----> post dec
    cout << "b2 = " << b2 << endl;
    cout << "a2 = " << a2 << endl << endl;

    int a3 = 10;
    int b3 = --a3;    // update ; kaam ---> pre dec
    cout << "b3 = " << b3 << endl;
    cout << "a3 = " << a3 << endl << endl;

    return 0;
} 
