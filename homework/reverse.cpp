/* ---------------  Reverse of integer  -----------------  */

#include<iostream>
using namespace std;
int main (){
    int num;
    int rev = 0;
    cout << "Enter the num : "; 
    cin >> num;
    while(num>0){
        int dig = num%10;
        rev = rev*10+dig;
        num /= 10; 
    }
    cout << rev << endl;
    return 0;
}