#include<iostream>
#include<algorithm>
using namespace std;

void BubbleSort(int arr[], int n){
    for(int i = 0; i<n;i++){
        int swapped = false; // optimization k agr kch swap nh hua to already sorted ha array or hum break krjaengy
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[i]){
                swap(arr[i], arr[j]);
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
}

int main(){

    int arr[5] = {22,1,5,0,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr,n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}