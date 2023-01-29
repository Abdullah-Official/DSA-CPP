#include<iostream>
using namespace std;

bool linearSearch(int *arr, int n, int key){
    // base case
    if(n==1 && arr[0] == key) {
        return 1;
    }
    if(n==0) return 0;

    bool found = arr[0] == key;
    
    if(found){
        return 1;
    }else{
        
        return  linearSearch(arr+1,n-1,key);
    }
    
    
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int ans = linearSearch(arr, 5, 4);
    if(ans){
        cout << "Element Found!" << endl;
    }else{
        cout << "Element not Found!" << endl;
    }
}