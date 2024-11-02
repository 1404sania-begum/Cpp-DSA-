#include<iostream>
using namespace std;
int main()
{
    int n ;
    int fact = 1;
    cout << "Enter the n :";
    cin >> n;
    for(int i = 1; i <= n;i++)      // 5! =  1 * 2 * 3 * 4 * 5
    {
        fact *= i;                  // 1 * 2 * 3 ------
    }
    cout << fact << " ";
    return 0;

}