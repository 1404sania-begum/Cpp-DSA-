#include<iostream>
using namespace std;
int main()
{
   int n;
   bool isprime = true;
   cout << "Enter the number :";
   cin >> n;
   for(int i = 2; i*i <= n-1;i++)       // i <= n-1
   {
        if(n % i == 0)
        {
            isprime = false;
            break;
        }
   } 
   if(isprime == true)
   {
    cout << "Prime no " << endl;
   }
   else{
    cout << "non-Prime no " << endl;
   }
    return 0;
} 
