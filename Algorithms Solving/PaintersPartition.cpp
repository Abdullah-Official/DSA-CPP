#include<iostream>
using namespace std;


bool isPossibleSolution(int arr[], int n, int k, int mid){
    int paintersCount = 1;
    int boardsSum = 0;

    for(int i = 0; i <n; i++){
        if(boardsSum+arr[i] <= mid){
            boardsSum+=arr[i];
        }else{
            paintersCount++;
            if(paintersCount > k || arr[i] > mid){
                return false;
            }
            boardsSum = 0;
            boardsSum+=arr[i];
        }
    }
    return true;
}

int allocatePainters(int arr[], int n , int k){
    int start,sum = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    int end = sum;
    int ans = -1;

    while(start<=end){
        int mid = start + (end-start)/2;
        if(isPossibleSolution(arr, n, k, mid)){
            ans = mid;
            end = mid - 1;
        }else{
            start=mid+1;
        }
    }
    return ans;
}

int main(){
 int arr[4] = {5,5,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2; //no of painters
    cout << allocatePainters(arr,n,k);
}