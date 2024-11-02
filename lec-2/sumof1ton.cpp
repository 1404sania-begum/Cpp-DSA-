#include<iostream>
using namespace std;
int main()
{
    int n , sum = 0;
    cout << "enter n :";
    cin >> n;
    for(int i = 1; i <= n ; i++){
        sum += i;
    }
    cout << "Sum is " << sum << endl;

    // sum of odd nos
    int num , oddSum = 0;
    cout << "enter num :";
    cin >> num;
    for(int j = 1; j <= num; j++){
        if (j % 2 != 0){
            oddSum += j;
        }
    }
    cout << "Odd sum is " << oddSum << endl;
    cout << endl;
    return 0;
}