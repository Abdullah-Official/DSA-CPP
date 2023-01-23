#include<iostream>
using namespace std;


bool linearSearch(int arr[], int key){
    // int length = (sizeof(arr)/sizeof(int));
    for(int i = 0; i < 5; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[5] = {1,5,23,8,0};
    bool found = linearSearch(arr, -12);
    if(found){
        cout << "Found";
    }else{
        cout << "Not Found!";
    }
}