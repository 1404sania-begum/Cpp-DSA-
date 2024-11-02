#include<iostream>
using namespace std;

// Function define
int printHello(){
    cout << "HELLO\n";
    return 3;
}

// sum of 2 numbers
int sum(int a,int b) // parameters
{  
    int c = a+b;
    return c;
}

//  min of two numbers
int min(int x,int y){
    if(x < y){
        return x;
    }
    else{
        return y;
    } 
}

int main (){
    int val = printHello();     //  function call (or) invoke
    cout << "Val=" << val << endl;

    cout << sum(10,5) << endl;   // arguments

    cout << "min = " << min(10,5) << endl;

    return 0;
}