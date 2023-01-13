#include<iostream>
using namespace std;

int firstOccurence(int arr[], int size, int key) {

    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;
    int ans = -1;
    while(start <= end) {

        if(arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        }

        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return ans;
}


int lastOccurence(int arr[], int size, int key) {
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans;
    while(start <= end) {
        if(arr[mid] == key) {
            ans = mid;
            start = mid+1;
        }
        else if(key > arr[mid]){
            start = mid+1;
        }else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}


int main() { 

    int arr[6] = {1,2,2,2,3,3};
    int k = 3;
    int firstIndex = firstOccurence(arr, 6, k);

    cout << "First occurence of " << k << " is at index " << firstIndex << endl;

    int lastIndex = lastOccurence(arr, 6, k);

    cout << "Last occurence of " << k << " is at index " << lastIndex << endl;


    return 0;
}