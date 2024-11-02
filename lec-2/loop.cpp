#include<iostream>
using namespace std;
int main (){

    // While loop
    int n ;
    int count = 1;
    cout << "Enter the vale of n:";
    cin >> n;
    while(count <= n){
        cout << count << " ";
        count++;
    }
    cout << endl;

    // For loop  ---> for(Initilization;Condition;updation)
    int m;
     cout << "Enter the vale of m:";
    cin >> m;
    for(int i = 1; i <= m; i++){
        cout << i << " ";
    }
    cout << endl;

    // do While loop
    int num;
    int i=1;
    cout << "Enter the value of num:";
    cin >> num;
    do {
        cout << i << " " ;
        i++;
    }while(i <= num);

    cout << endl;
    return 0;
}

