#include<iostream>
using namespace std;

// for(int j = i ; j < n; j++){
//             if(arr[i] > arr[j]){
//                 swap(arr[i], arr[j]);
//             }
//         }

void bubbleSort(int *arr, int n){

    if(n==0){
        return;
    }

    for(int i = 0; i<n; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    bubbleSort(arr, n-1);
}

void print(int *arr, int n){
    for(int i=0; i < n; i++){
        cout << arr[i] <<  " ";
    }
}

int main(){
    int arr[5] = {5,4,3,21,1};
    int n = 5;
    print(arr,n);
    bubbleSort(arr,n);
    cout << endl;
    print(arr,n);
}