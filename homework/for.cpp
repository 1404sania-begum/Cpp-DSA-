#include<iostream>
using namespace std;
 int main (){
    int num,evenSum = 0; 
    cout << "Enter the number ";
    cin >> num;
    for (int i = 1 ; i <= num ; i++){   //1 2 3 4 5 6 7 8 9 10
        if(i % 2 == 0){                 //2%2==0 , 4%2==0
            evenSum += i;               // 0 + 2 + 4 + 6 + 8 + 10
        }
    }
    cout << "Even is " << evenSum << " ";
    return 0;
 }