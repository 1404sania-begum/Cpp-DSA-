#include<iostream>
using namespace std;


// num = 2356 (6+5+3+2) splitting
int sumOfDigits(int num){
    int digitSum = 0 ;
    while(num > 0){
        int lastDigit = num%10;     // digit split karta 
        num /= 10;                  // number split karta
        digitSum += lastDigit;
    }
    return digitSum;
}

int main (){
    cout << "sum is " << sumOfDigits(2356) << endl;
    return 0;
}