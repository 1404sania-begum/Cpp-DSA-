#include<iostream>
using namespace std;
int main()
{
    // Nested loop

    // print the stars in same line
    int a ,b;
    cout << "Enter the value of a:";
    cin >> a;
    cout << "Enter the value of b:";
    cin >> b;
    
    for(int i = 0; i <= a-1;i++){     // deciding how much lines to print eg: i <= 5(5 lines)
        for(int j = 0; j <= b-1; j++){    // decide kya kam hura line mai 
            cout << "*" ;
        }
        cout << endl;
    }

    // print the stars with lastspace
    
    int a2 ,b2;
    cout << "Enter the value of a2:";
    cin >> a2;
    cout << "Enter the value of b2:";
    cin >> b2;
    
    for(int i = 1; i <= a2;i++){     // deciding how much lines to print eg: i <= 5(5 lines)
        for(int j = i; j <= b2; j++){    // decide kya kam hura line mai 
            cout << "*" ;
        }
        cout << endl;
    }


    return 0;
} 