#include<iostream>
#include<vector>
using namespace std;

int countSumSubsequences(int ind,int s, int sum, int n, int arr[]){
    //base case
    if(s>sum) return 0; // optimization
    if(ind == n){
        if(s == sum){
           return 1;
        }
        return 0;
    }
    // pick
    
    s += arr[ind];
    int left = countSumSubsequences(ind+1,s,sum,n,arr);

    // not pick
    s -= arr[ind];
    int right = countSumSubsequences(ind+1,s,sum,n,arr);

    return left + right;
}

int main(){
    int arr[] = {1,2,1};
    int n = 3;
    int sum = 3;
    cout << "Total Count of Sum Subsequences is: " << countSumSubsequences(0,0,sum,n,arr);
}