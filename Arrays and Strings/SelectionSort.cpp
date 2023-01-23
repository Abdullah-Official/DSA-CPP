#include<iostream>
#include<algorithm>
using namespace std;

void SelectionSort(int arr[], int n){
    int minIndex = 0; // default set minimum Index = 0;
    for(int i = 0; i<n; i++){
        minIndex = i; // minIndex = i
        for(int j=i+1; j<n; j++){ // using this loop to check array from i+1 to n
            if(arr[j] < arr[minIndex]){
                minIndex = j; // if we found minimum value in other part of array we save its index to minimum
            }
        }
        swap(arr[minIndex], arr[i]); // after saving index to minimum , we will swap those values
    }
}

int main(){

    int arr[5] = {22,1,5,0,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr,n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}