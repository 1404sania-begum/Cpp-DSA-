#include<iostream>
using namespace std;

  int main(){

  /****************Sum of two numbers************/
//     int num1,num2;
//     cout<<"Enter the value of num1\n";23

//     cin>>num1;
//     cout<<"Enter the value of num2\n";
//     cin>>num2;
//       cout<<"The sum is "<<num1+num2;


 
  /****************If else ladder************/
//   int age;
//   cout<<"Tell your age:"<<endl;
//   cin>>age;
//   if(age < 10){
//       cout<<"you are a kid you may not be able to think vote"<<endl;
//   }
//   else if(age < 18){
//     cout<<"you can't vote"<<endl;
//   }
//   else{
//      cout<<"you can vote"<<endl;
//   }
  /****************Switch cases************/
  int age;
  cout<<"Tell me your age"<<endl;
  cin>>age;
  switch (age)
  {
  case 42 :
    cout<<"you may or may not  be passed"<<endl;
    break;
  case 52:
    cout<<"you may be passed"<<endl;
    break;
  case 62 :
    cout<<"you are a good "<<endl;
    break;
  case 72 :
    cout<<"you are the best"<<endl;
    break;
  case 92 :
    cout<<"you are excellent"<<endl;
    break;
  
  default:
       cout<<"you may fail"<<endl;
   
  }

  return 0;

  }
