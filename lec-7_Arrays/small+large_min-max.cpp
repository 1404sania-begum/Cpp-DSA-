#include<iostream>
#include<climits>
using namespace std;

int main(){
    int nums[] = {12,43,-3,43,54,33};
    int size =6;
    int smallest = INT_MAX;
    int Largest = INT_MIN;

    for(int i=0 ; i<size ; i++){
    smallest=min(nums[i],smallest);   
    Largest = max(nums[i],Largest);
    }

    cout << "smallest = "<< smallest << endl;
    cout << "Largest = " << Largest << endl;
    return 0 ;
}