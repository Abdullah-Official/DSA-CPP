#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void findSubsetSum(int ind, int sum, vector<int> arr, vector<int>& ans){
    //base case
    if(ind == arr.size()){
        ans.push_back(sum);
        return;
    }
    // pick
    sum+=arr[ind];
    findSubsetSum(ind+1, sum, arr,ans);
    sum-=arr[ind];

    //not pick
    findSubsetSum(ind+1, sum, arr,ans);

    // 2nd way
    // findSubsetSum(ind+1, sum, arr,ans);
    // findSubsetSum(ind+1, sum+arr[ind], arr,ans);
}

int main(){

    vector<int> arr = {3,1,2};
    int sum = 0;
    int ind = 0;
    vector<int> ans;
    findSubsetSum(ind, sum, arr,ans);
    sort(ans.begin(), ans.end());
    for(int i = 0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }

    return 0;
}