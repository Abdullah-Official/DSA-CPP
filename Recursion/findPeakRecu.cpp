#include<iostream>
using namespace std;

int findPeak(int *arr, int s, int e){

    // Base case
    if(s > e) {
        return -1;
    }
    int mid = s + (e-s)/2;
    
    // Processing
    if( arr[mid-1] <= arr[mid] && arr[mid] >= arr[mid+1]){
        return mid;
    }
    else if(arr[mid] > arr[mid+1]) {
        return findPeak(arr, s, mid);
    } else {
        return findPeak(arr, mid+1, e);
    }
    
}

int main() {
    int arr[] = {1, 2, 6, 9, 40, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int peakIndex = findPeak(arr, 0, n-1);
    if (peakIndex == -1) {
        cout << "No peak element found." << endl;
    } else {
        cout << "Peak element found at index: " << peakIndex << endl;
    }
    return 0;
}
