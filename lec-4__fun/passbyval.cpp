#include<iostream>
using namespace std;
 int sum(int a,int b){
    a =a + 10;
    b =b + 10;
    return a+b;
 }

void changeX(int x){
    x = 2*x;
    cout << "X = " << x << endl;
 }

 
 int main(){
    int a = 5, b = 4;
    cout << sum(a,b) << endl;

    int x = 5;
    changeX(x);
    cout << "X = " << x << endl;
    return 0;
 }