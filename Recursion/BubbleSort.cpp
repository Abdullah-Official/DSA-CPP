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

    // element ko last ma rkhdega
    for(int i = 0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    //  n-1 isliye kra becz last element sort ho chuka ha then usko consider again krne ki need nh or base case bh humara yh btarha
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