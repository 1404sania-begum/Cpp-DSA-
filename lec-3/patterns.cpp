#include<iostream>
using namespace std;
 int main()
 {

    // patterns in digits 
    int n;
    cout << "Enter the n value :";
    cin >> n;
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=n ; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }


    // patterns in characters
    int n1;
    cout << "Enter the  value :";
    cin >> n1;
    for(int i=0 ; i<n1 ; i++)
    {
        char ch = 'A';              // we want characters fron inner loop so define here 
        for(int j=0 ; j<n1 ; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;               // because of after one line to go next line
    }
    // patterns in stars
    int n2;
    cout << "Enter the  value :";
    cin >> n2;
    for(int i=0 ; i<n2 ; i++)
    {
        for(int j=0 ; j<n2 ; j++)
        {
            cout << "* ";
        }
        cout << endl;               
    }


    // square patterns (digits)   1 2 3 ---> 4 5 6 ----> 7 8 9
    int m;
    int num = 1;
    cout << "Enter value m : ";
    cin >> m;
    for(int i=0 ; i<m ; i++){           // decide karre ke kitni lines huna 
        for(int j=0 ; j<m ; j++){       // decide karra ke line mai kya huna
            cout << num << " ";
            num++;
        }
        cout << endl;
    }


    //square patterns(character)   A B C ---> D E F ---> G H I
    int a;
    char ch = 'A';
    cout << "Enter value a : ";
    cin >> a;
    for(int i=0 ; i<a ; i++){
       
        for(int j=0 ; j<a ; j++){
            cout << ch << " " ;
            ch++;
        }
        cout << endl;
    }

    return 0;
 }