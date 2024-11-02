#include<iostream>
#include<climits>
using namespace std;

int main(){
    int nums[] = {21,33,1,2,-5,24};
    int size = 6;
    int smallest = INT_MAX;
    int Largest = INT_MIN;

    for(int i=0 ; i<size ; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
        }
        if (nums[i] > Largest){
            Largest = nums[i];
        } 
    }
    cout << "smallest = "<< smallest << endl;
    cout << "Largest = "<< Largest << endl;
    return 0;
}