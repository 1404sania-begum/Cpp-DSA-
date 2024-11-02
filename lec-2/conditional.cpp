#include<iostream>
using namespace std;
int main (){
    // if else condition //

    //positive or negative
    int num;
    cout << "Enter the Value of num : ";
    cin >> num ;
    if(num >= 0){
        cout << "num Positive\n " ;
        
    }
    else{
        cout << "num Negative\n " << endl << endl;
    }

    // even or odd
    int n;
    cout <<"Enter the number:" ;
    cin >> n;
    if( n%2 == 0){
        cout << "Even\n" << endl << endl;
    }
    else{
        cout << "odd\n" << endl << endl;
    }


    // if-else if-else
    int marks;
    cout << "Enter your marks : ";
    cin >> marks;
    if(marks >= 90){
        cout << "Marvellous\n";
    }else if(marks >= 80 && marks < 90){
        cout << "Excellent\n";
    }else if(marks >= 70 && marks < 80){
        cout << "Very Good\n";
    }else if(marks >= 60 && marks < 70){
        cout << "Good\n";
    }else if(marks >= 50 && marks < 60){
        cout << "Need Improvement\n";
    }else{
        cout << "Fail\n";
    }
    
    


    return 0;
}