#include<iostream>
using namespace std;

void swapAlternate(int arr[]){
    // int n = sizeof(arr)/sizeof(arr[0]);
    int first = 0;
    int second = 1;
    for(int i =0; i<6; i++){
        if(second < 6){
            int temp = arr[first];
            arr[first] = arr[second];
            arr[second] = temp;
            // swap(arr[first], arr[second]); // built in swap
            first+=2;
            second+=2;
        }
    }
}

void printArray(int arr[]){
    for(int i=0; i < 6; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[6] = {2,1,4,2,8,1};
    printArray(arr);
    cout << endl;
    swapAlternate(arr);
    printArray(arr);
}