#include<iostream>
using namespace std;
int main()
{
    char  ch;
    cout << "Enter the character : ";
    cin >> ch;
    if(ch >= 65 && ch <= 90){
        cout << "UpperCase\n";
    }else {
        cout << "LowerCase\n" << endl << endl;
    }

    // Ternary statement
    int n;
    cout << "Enter the any number : ";
    cin >> n;
    cout << (n >= 0 ? "Positive" : "Negative") << endl;
    return 0;
} 
