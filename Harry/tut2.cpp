#include<iostream>
using namespace std;

int main(){
      /***********  break    *************/
    for (int i = 0; i < 34; i++)
    {
        // cout<<i<<endl;     if it is there then given i value is also print
        if(i == 5){
            break;
        }
        cout<<i<<endl;      // if it is there then given i value isn't also print
    }

    cout<<""<<endl;         // it is using just for line seperation
    
    
    /*********** continue *************/
    for (int j = 0; j < 34; j++)
    {
        if(j == 5){
           continue;
        }
        cout<<j<<endl;
    }
    
    
    cout<<""<<endl;         // it is using just for line seperation

    // pointers in arrays
    int subjects[] = {232,43,1234,153,421,302};
    int *p = subjects;
    cout<<"The subject is "<<subjects<<endl;
    cout<<"The subject is "<<p<<endl;
    cout<<"The subject is "<<*p<<endl;
    cout<<"The subject is "<<*(p+1)<<endl;
    cout<<"The subject is "<<*(p+2)<<endl;
    cout<<"The subject is "<<*(p+4)<<endl;
    cout<<"The subject is "<<*(p+5)<<endl;
    cout<<"The subject is "<<*(p+3)<<endl;

    // int a[] = {23,232,32,54,43,54,33};
    // for(int i=0;i<6;i++)
    // {
    //      while(i = 0)
    //         cout<<a[i+1]<<endl;

    // }
    return 0;
}