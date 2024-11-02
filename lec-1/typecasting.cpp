#include<iostream>
using namespace std;
int main(){
    // Type conversion (implict - compiler) ---> small to big
    char grade = 'A';
    int value = grade;
    cout << value << endl << endl;

    // Type casting (explict - programmer) ---> big to small
    double price = 100.999;
    int newPrice = int(price);
    cout << newPrice << endl;
    return 0;
}