#include<iostream>
using namespace std;
int main()
{
    int n ;
    int sum = 0;
    cout << "Enter the n :";
    cin >> n;
    for(int i = 1; i <= n; i++){        // 1<=10
        if(i % 3 == 0)                  // 1%3[n]  2%3[n]  3%3[y]
        {
            sum += i;       // 0 + 3 + 6 + 9 
        }
    }
    cout << sum << " ";
    cout << endl ;
    return 0;
}