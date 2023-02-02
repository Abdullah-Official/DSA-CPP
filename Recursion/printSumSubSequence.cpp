#include<iostream>
#include<vector>
using namespace std;

void printSumSubseq(int ind,int s, int sum, vector<int> &ds, int n, int arr[]){
    //base case
    if(ind == n){
        if(s == sum){
            for(auto elem: ds){
                cout << elem << " ";
            }
            cout << endl;
        }
        return;
    }
    // pick
    
    ds.push_back(arr[ind]);
    s += arr[ind];
    printSumSubseq(ind+1,s,sum,ds,n,arr);

    // not pick
    s -= arr[ind];
    ds.pop_back();
    printSumSubseq(ind+1,s,sum,ds,n,arr);
}

int main(){
    int arr[] = {1,2,1};
    int n = 3;
    vector<int> ds;
    int sum = 3;
    printSumSubseq(0,0,sum,ds,n,arr);
}