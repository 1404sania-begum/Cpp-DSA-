#include<iostream>
using namespace std;
int main()
{

    // n-i-1 ---> i-0, lets n=4,spaces kitni hai 3 =====> n-i-1 ---- 4-0-1 = 3spaces 
    int n ;
    cout << "Enter the n :";
    cin >> n;
    for(int i=0 ; i<n; i++){
        // spaces : n-i-1
        for(int j=0; j<n-i-1 ; j++){        
            cout << " ";
        }
        // num1 : i+1
        for(int j=1 ; j<=i+1; j++){        
            cout << j;
        }
        //  num2 : backwrdloop
        for(int j=i ; j>0; j--){        
            cout << j;
        }
        cout << endl;
    }

    return 0;
}

