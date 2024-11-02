#include<iostream>
using namespace std;

int linearSearch(int arr[],int size,int target){
    for(int i=0 ; i<size ; i++){
        if(arr[i] == target){
            return i;   // found ret index value
        }
    }
    return -1;          // not found ret -1
}
int main(){
    int arr[] = {1,3,98,4,25,17,68};
    int size = 7;
    int target;
    cout << "Enter the target value : ";
    cin >> target;
    cout<< linearSearch(arr,size,target)<<endl;
    
    return 0;
}