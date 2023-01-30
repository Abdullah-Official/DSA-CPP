#include<iostream>
using namespace std;

void selectionSort(int *arr, int n){
    if(n <= 1){
        return;
    }
    int minIndex = 0;
    int i;
    for(i = 1; i < n; i++){
        if(arr[i] < arr[minIndex] ){
            minIndex = i;
        }
    }
    if (minIndex != 0){
        swap(arr[0], arr[minIndex]);
    }
    selectionSort(arr+1, n-1);
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
    selectionSort(arr,n);
    cout << endl;
    print(arr,n);
}