#include<iostream>
using namespace std;
int main()
{
   int num,oddSum = 0;
   int i = 1;
   cout << "Number is "; // 1 2 3 4 5 6 7 8 9 10
   cin >> num;
   while( i <= num){
    if(i % 2 != 0){
        oddSum += i;    // 0 + 1 + 3 + 5 + 7 + 9
    }
    i++;            // 0 1 2 3 
   } 
   cout << oddSum << " ";
   return 0;
} 
