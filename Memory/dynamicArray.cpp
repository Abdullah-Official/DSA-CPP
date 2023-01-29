#include<iostream>
using namespace std;

void print(int *arr, int n){
     for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    // dynamic memory allocation using Heap
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++){
        cout << "Enter value: " << i << endl;
        cin >> arr[i];
    }
    print(arr,n);
}