#include<iostream>
using namespace std;
int main()
{
   
    // Hallow pattern

    int m ;
    cout << "Enter the m :";
    cin >> m;

    // top part
    for(int i=0 ; i<m; i++){
        // spaces : n-i-1
        for(int j=0 ; j<m-i-1 ; j++){
            cout << " ";
        }
        cout << "*";
        if(i != 0){
            // spaces : 2*i-1
        for(int j=0 ; j<2*i-1 ; j++){
            cout << " ";
        }
        cout << "*";
        }
        cout << endl;

    }

    // Bottom part
    for(int i=0 ; i<m-1 ; i++){
        // spaces : i+1
        for(int j=0 ; j<i+1 ; j++){
            cout << " ";
        }
        cout << "*";

        if(i != m-2){
            // spaces : 2*(m-i)-5
            for(int j=0 ; j<2*(m-i)-5 ; j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    return 0; 
} 