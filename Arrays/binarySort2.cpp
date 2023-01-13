#include<iostream>
#include<algorithm>
using namespace std;




void sort012(int arr[], int n) {
    int first = 0;
    int right = n-1;
    int i =0;
    while(i<=right){
            if(arr[i] == 0){
            swap(arr[i], arr[first]);
            first++;
            i++;
            }else if(arr[i] == 1){
                i++;
            }else{
            swap(arr[i], arr[right]);
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
    int arr[6] = {0,1,2,0,0,1}; //0 1 1 0 0 1 1 0 1 0
    int n = sizeof(arr)/sizeof(arr[0]);
    sort012(arr, n);
    printArray(arr,n);
}