#include<iostream>
using namespace std;

int decimalToBinary(int decNum){
    int ans=0 , pow=1;
    while(decNum>0){
        int rem = decNum%2;
        decNum /= 2;
        ans += rem*pow;
        pow = pow*10;
    }
    return ans;     // binary form
}
int main(){
    int decNum;
    cout << "Enter the decNum value : ";
    cin >> decNum; 
    cout << decimalToBinary(decNum)  << endl << endl;

    return 0;
}