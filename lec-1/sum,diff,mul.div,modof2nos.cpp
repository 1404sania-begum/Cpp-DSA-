#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Enter the value of a :";
    cin >> a;

    cout << "Enter the value of b :";
    cin >> b;
    
    int sum = a + b;
    cout << "Sum is " << sum << endl << endl;

    int diff = a- b;
    cout << "Difference : " << diff << endl << endl;

    int mul = a * b;
    cout << "Product : " << mul << endl << endl;

    int div = a / b;
    cout << "Division : " << div << endl << endl;

    int mod = a % b;
    cout << "remainder : " << mod << endl;

    return 0;
}