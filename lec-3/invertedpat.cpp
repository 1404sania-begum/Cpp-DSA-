#include<iostream>
using namespace std;
int main()
{

    // inverted patterns of digits
    int n ;
    cout << "Enter the n :";
    cin >> n;
    for(int i=0 ; i<n; i++){
        for(int j=0 ; j<i ; j++){       // inner loop1 for space 
            cout << " ";
        }
        for(int j=0 ; j<n-i ; j++){      // inner loop2 for numbers
            cout << i+1;
        }
        cout << endl;
    }

    // inverted patterns of characters
    int m ;
    char ch = 'A';
    cout << "Enter the m :";
    cin >> m;
    for(int i=0 ; i<m; i++){
        for(int j=0 ; j<i ; j++){   
            cout << " ";
        }
        for(int j=0 ; j<m-i ; j++){     // m - i -----> i-0, lets m=4 ,spaces kitni hai 1(2 line) ====> 4-1 ----> 3 num print
            cout << ch;
        }
        ch++;
        cout << endl;
    }

    //inverted pyramid patterns of stars 
    int m1 ;
    cout << "Enter the m1 :";
    cin >> m1;
    for(int i=0 ; i<m1; i++){
        for(int j=0 ; j<i ; j++){   
            cout << " ";
        }
        for(int j=0 ; j<m1-i ; j++){
            cout << "* ";
        }
        cout << endl;
    }
    // inverted pyramid patterns of digits
    int a ;
    cout << "Enter the a :";
    cin >> a;
    for(int i=0 ; i<a; i++){
        for(int j=0 ; j<i ; j++){   
            cout << " ";
        }
        for(int j=0 ; j<a-i ; j++){
            cout << i+1 << " ";
        }
        cout << endl;
    }
    
    return 0;
}