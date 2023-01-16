#include<iostream>
using namespace std;

int findPivotElement(int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    while(start<end){ 
        if((arr[mid] >= arr[0])){ 
            start=mid+1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int findPivotMaxElement(int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    while(start<end){
        if((arr[mid] > arr[mid+1])){
            return mid;
        }
        else if(arr[mid] < arr[mid-1]){
                start=mid+1;
        }
        mid = start + (end-start)/2;
    }
    return start;
}


int main(){
    int arr[7] = {19,29,39,49,1};
    cout << "Max Pivot: " << findPivotMaxElement(arr, 7) << endl;
    cout << "Min Pivot: " << findPivotElement(arr, 7);
}