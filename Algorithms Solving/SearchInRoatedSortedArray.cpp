#include<iostream>
using namespace std;


int findPivot(int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid = (start+end)/2;

    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid+1;
        }else{
            end = mid;
        }
        mid = (start+end)/2;
    }

    return end;
}


int binarySearch(int arr[], int s, int e, int n, int key){
    int start = s;
    int end = e;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            start = start + 1;
        }else {
            end = mid - 1;
        }
         mid = start + (end-start)/2;
    }
    return -1;
}






int main(){
    int arr[5] = {7,9,10,11,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 9;
    int pivot =  findPivot(arr,5);
    if((key >= arr[pivot]) && (key <= arr[n-1])){
        cout << binarySearch(arr, pivot,n-1,n,key);
    }else{
        cout << binarySearch(arr, 0,pivot-1,n,key);
    }

}