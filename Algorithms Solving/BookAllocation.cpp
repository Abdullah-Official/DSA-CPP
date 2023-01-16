#include<iostream>
using namespace std;


bool isPossibleSolution(int arr[], int n, int m, int mid){
    int pagesSum = 0;
    int studentsCount = 1;
    for(int i=0; i<n; i++){
        
        if(pagesSum+arr[i] <= mid){
            pagesSum+=arr[i];
           
        }else{
             studentsCount++;
            if(studentsCount > m || arr[i] > mid){
                return false;
            }
            pagesSum = 0;
            pagesSum+=arr[i];
        }
    }
    return true;
}

int allocateBooks(int arr[], int n, int m){
    int start = 0;
    int sum = 0;
    int ans = -1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int end = sum;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(isPossibleSolution(arr,n,m, mid)){
            ans = mid;
            end = mid-1; // peeche ishe liye arhy hain kyun k hume minimum chaiye wrna aagy he jaate..
        }else{
            start = mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[4] = {10,20,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = 2; //no of students
    cout << allocateBooks(arr,n,m);
}