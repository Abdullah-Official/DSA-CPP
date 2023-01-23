#include<iostream>
using namespace std;

void findUnique(int arr[], int n){
    int unique = arr[0];
    for(int i = 1; i < n; i++){
        unique = unique^arr[i];
    }
    cout << unique;
}





int main(){
    int arr[7] = {2,2,4,3,3,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    findUnique(arr,n);
    cout << endl;
}