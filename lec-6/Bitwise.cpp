#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Enter the value of a :";
    cin >> a;
    cout << "Enter the value of b :";
    cin >> b;
    cout << (a & b) << endl;        // Bitwise AND
    cout << (a | b) << endl;        // Bitwise OR
    cout << (a ^ b) << endl;        // Bitwise XOR ----> same=0 and diff=1

    cout << (4 << 1) << endl;       // Bitwise LeftShift  ---> a*2^b
    cout << (10 << 2) << endl;      

    cout << (4 >> 1) << endl;       // Bitwise RighttShift  ---> a/2^b
    cout << (10 >> 2) << endl;       
}