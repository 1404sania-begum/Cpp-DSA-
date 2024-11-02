#include<iostream>
using namespace std;
int main (){

    // global scope ---> can access anywhere 
    int x = 10;
    if(3>2){
        int x=10;
    }
    cout << x << endl;

    // local scope ---> gives error, it can be accesss within the block of code for 
    // eg: if it defines in if-else block and call after the block it gives error 
    // bcoz it exit from the memory after the execution of if-else stmt 

    /* if(3>2){
        int x1=10;
    }
    cout << x1 << endl; */
}