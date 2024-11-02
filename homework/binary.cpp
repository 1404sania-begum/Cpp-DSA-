#include<iostream>
using namespace std;

int main(){
    int a[50],n,key,l,m,h;
    cout << "Enter the size n : ";
    cin >> n;
    cout << "Enter the array : ";
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }
    cout << "Enter the key : ";
    cin >> key;
    while(l <= h){
        m = (l+h)/2;
        if(a[m] == key){
            cout << key << endl;
            return m;
        }
        if(a[m] > key){
            h = m-1;
            cout << key << endl;
        }
        else {
            l = m+1;
            cout << key << endl;
        }
    }
    cout << "Key not found " << key << endl;
    return 0;
}
