#include<iostream>
using namespace std;

int sumArray(int *arr, int n){
    if(n == 1){
        return arr[0];
    }
    if(n == 0){
        return 0;
    }

    int sum = arr[0] + sumArray(arr+1, n-1);;
    
    return sum; 
    
    
}


int main(){
    int arr[5] = {1,2,3,9,5};
    int ans = sumArray(arr, 5);
    cout << "Sum is " << ans;
}