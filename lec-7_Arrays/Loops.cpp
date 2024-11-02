#include<iostream>
using namespace std;
 
int main(){
    // loops 0 to size-1
    
    int size = 5;
    int marks[size];
    for(int i=0 ; i<size ; i++){
        cin >> marks[i];
    }
     for(int i=0 ; i<size ; i++){
        cout << marks[i] << endl;
    }
    return 0;
}