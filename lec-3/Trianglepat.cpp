#include<iostream>
using namespace std;
int main ()
{

    // triangle patterns 


    // triangle patterns  in stars
    int n;
    cout << "Enter the n value :";
    cin >> n;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<i+1 ; j++){
            cout << "* ";
        }
        cout << endl;
    }


    // triangle patterns  in digits
    int n1;
    cout << "Enter the n1 value :";
    cin >> n1;
    for(int i=0 ; i<n1 ; i++)
    {
        for(int j=0 ; j<i+1 ; j++){
            cout << i+1 << " ";
        }
        cout << endl;
    }

    // triangle patterns  in characters
    int n2;
    cout << "Enter the n2 value :";
    cin >> n2;
    char ch = 'A';
    for(int i=0 ; i<n2 ; i++)
    {
        for(int j=0 ; j<i+1 ; j++){
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }


    
    // triangle patterns  in digits-(Forward)    1 ---> 1 2 ---> 1 2 3
    int n11;
    cout << "Enter the n11 value :";
    cin >> n11;
    for(int i=0 ; i<n11 ; i++)
    {
        for(int j=1; j<=i+1 ; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    
    // triangle patterns  in digits-(Backward)    1 ---> 2 1 ---> 3 2 1
    int n12;
    cout << "Enter the n12 value :";
    cin >> n12;
    for(int i=0 ; i<n12 ; i++)
    {
        for(int j=i+1; j>0 ; j--){
            cout << j << " ";
        }
        cout << endl;
    }



    // triangle patterns  in characters-(Forward)    A ---> A B ---> A s1
    int s1;
    char a1 = 'A';
    cout << "Enter the s1 value :";
    cin >> s1;
    for(int i=0 ; i<s1 ; i++)
    {
        for(int j=1; j<=i+1 ; j++){
            cout << a1 << " ";
        }
          a1++;
        cout << endl;
    }
    

    // triangle patterns  in characters-(Backward)    A ---> B A ---> C B A
    int s;
    char a = 'A';
    cout << "Enter the s value :";
    cin >> s;
    for(int i=0 ; i<s ; i++)
    {
        for(int j=i+1; j>0 ; j--){
            cout << a << " ";
        }
        a--;
        cout << endl;
    }

    
    // Floyd's patterns  in digits
    int m;
    int num = 1;
    cout << "Enter the m value :";
    cin >> m;
    for(int i=0 ; i<m ; i++)
    {
        for(int j=0 ; j<i+1 ; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    } 

    // Floyd's patterns  in characters
    int m1 ;
    char ch1 = 'A';
    cout << "Enter the m1 : ";
    cin >> m1;
    for(int i=0 ; i<n ; i++ ){
        for(int j=0 ; j<i+1 ; j++){
            cout << ch1 << " ";
            ch1++;
        }
        cout << endl;
    }

    return 0;
}