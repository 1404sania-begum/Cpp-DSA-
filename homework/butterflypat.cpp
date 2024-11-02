#include<iostream>
using namespace std;
int main ()
{
    int n=4;
    // top part
    for(int i=0 ; i<n ; i++)
    {
        // stars : i+1
        for(int j=0 ; j<i+1 ; j++){
            cout << "*";
        }
        // spaces : 2-i+1
        for(int j=0 ; j<2-i+1 ; j++){
            cout << " ";
        }
        // spaces : 2-i+1
        for(int j=2-i+1 ; j>0 ; j--){
            cout << " ";
        }
        // stars : 
        for(int j=i+1 ; j>0 ; j--){
            cout << "*";
        }
        cout << endl;
    }

    // bottom part
    for(int i=0 ; i<n ; i++)
    {
        // stars 
        for(int j=0 ; j<2-i+2 ; j++){
            cout << "*";
        }
        // spaces 
            for(int j=1 ; j<i; j++){
                cout << " ";
            }
        // spaces 
        if(i != 0){


            for(int j=i+1 ; j>0 ; j--){
                cout << " ";
            }
        }

        // stars 
        for(int j=2-i+2 ; j>0 ;j--){
            cout << "*";
        }
        cout << endl;
    }
}