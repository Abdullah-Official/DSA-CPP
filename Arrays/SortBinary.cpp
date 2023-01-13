#include<iostream>
#include<algorithm>
using namespace std;


void binarySort(int arr[], int n){
    int left = 0;
    int right = n-1;
    while(left < right){  
        if(arr[left] == 0){
            left++;
        }
        else if(arr[left] > arr[right]){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }else{
            right--;
        }
    }
}


void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[6] = {0,1,0,1,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    binarySort(arr, n);
    printArray(arr,n);
}