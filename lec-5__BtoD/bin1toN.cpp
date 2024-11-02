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
    for(int i=1 ; i<=10 ; i++){     // 1 2 3 4 5 6 7 8 9 10
        cout << decimalToBinary(i) << endl;
    }
    return 0;
}