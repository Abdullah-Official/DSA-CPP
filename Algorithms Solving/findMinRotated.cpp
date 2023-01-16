#include<iostream>
using namespace std;

int findMin(int arr[], int n) {
         int start = 0;
    int end = n - 1;
    int mid = start + (end-start)/2;
    while(start <= end){
        if(mid == 0 || arr[mid-1] > arr[mid]){
            return arr[mid];
        }
        if(arr[start] > arr[mid]){
            end = mid-1;
        }
        else if(arr[end] < arr[mid]){
            start = mid + 1;
        }
        else {
            return arr[start];
        }
        mid = start + (end-start)/2;
    }
    return arr[start];
    }

int main(){
    int arr[5] = {5,6,7,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << findMin(arr, n);
}