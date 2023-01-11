#include<iostream>
using namespace std;


void reverseArray(int arr[], int n){
     int start = 0;
    int end = n-1;
    for(int i=0; i < 5; i++){
       
        if(start < end){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
}

void printArray(int arr[]){
    for(int i=0; i < 5; i++){
        cout << arr[i] << " ";
    }
}


int main(){
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
     reverseArray(arr,size);
    printArray(arr);
}