// using functions 


// Q. check weather the given no is prime or not?
#include<iostream>
using namespace std;
bool prime(int n){
    bool isPrime = true;
    for(int i=2 ; i<n ; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == true ){
        cout << "Prime no " << endl;
    }
    else{
        cout << "Not a Prime no " << endl;
    }
 }


// Q. print nos from 2 to n ? 

void printPrime(int n1){
    for(int i=2 ; i<n1 ; i++){
        bool isPrime = true;
        for(int j=2 ; j*j<=i ; j++){
            if(i%j == 0){
                isPrime=false;
                break;
            }
        }
        if(isPrime){
            cout << i << " ";
        }
    }
    cout << n1 << endl;
}
 
// main function :
 int main (){
    int n;
    cout << "Enter the n :";
    cin >> n;
    prime(n);

    int n1;
    cout << "Enter the n1 :";
    cin >> n1;
    printPrime(n1);
    return 0;
 }

