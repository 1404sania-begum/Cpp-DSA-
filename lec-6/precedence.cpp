/* ----------------------  Precedence operator

    ! , ++ , --       (unary operator)       ---> R to L
    * , / , %         (arithmetic operator)  ---> L to R 
    + , -             (arithmetic operator)  ---> L to R
    < , <= , >= , >   (relational operator)  ---> L to R  
    
 ---------------------------------------------------------------------------*/

#include<iostream>
using namespace std;
int main(){

    cout << (10 * 5 + 2) << endl;
    cout << (10 * 5 % 2) << endl;
    cout << (10 / 5 * 2) << endl;
}