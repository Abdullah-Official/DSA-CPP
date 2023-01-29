#include<iostream>
using namespace std;

bool isSorted(int *arr, int n){
    if(n == 1 || n == 0){
        return 1;
    }
    if(arr[0] > arr[1]){
        return 0;
    }
    return isSorted(arr+1, n-1);
}


int main(){
    int arr[5] = {1,2,3,9,5};
    int ans = isSorted(arr, 5);
    if(ans){
        cout << "Array is Sorted" << endl;
    }else{
        cout << "Array is not Sorted" << endl;
    }
}