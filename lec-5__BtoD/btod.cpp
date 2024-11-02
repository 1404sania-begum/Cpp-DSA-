#include<iostream>
using namespace std;
int binaryToDecimal(int binNum){
    int ans=0 , pow=1;
    while(binNum>0){
        int rem = binNum%10;
        ans += rem * pow;
        binNum /= 10;
        pow = pow*2;
    }
    return ans;     // decimal number
}
int main (){
    int binNum;
    cout << "Enter the binNum value : ";
    cin >> binNum;
    cout << binaryToDecimal(binNum) << endl;
    return 0;
}