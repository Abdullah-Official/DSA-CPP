#include<iostream>
#include<algorithm>
using namespace std;

void insertionSort(int n, int arr[]){
     
     
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > temp ){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

int main(){

    int arr[5] = {22,1,5,0,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(n,arr);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}