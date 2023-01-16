#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool minPossible(vector<int> &rank,int mid,int m){ 
    int dishes=0;  
    // loop through the cooks
    for(int i=0;i<rank.size();i++){
        int sum=0;
        // loop through the dishes
        for(int j=1;sum<=mid;j++){
            sum=sum+rank[i]*j;
            dishes++;

            if(sum > mid){
                dishes--;
            }

            if(dishes>=m){
                return true;
            }
            
        }
    }
    return false; 
}

int minCookTime(vector<int> &rank, int m) {
    int start = 0;
   int totalTime = 0;
    for(int i=0; i<rank.size();i++){
        for(int j=1; j<=rank.size();j++){
            totalTime+=j*rank[i];
        }
    }
    int end = totalTime;
    int ans;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(minPossible(rank, mid , m)){
            ans = mid;
            end = mid - 1;
        }else{
            start = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> ranks = {1,2,3,4}; //ranks of cooks
    int m = 11;
    cout << minCookTime(ranks, m);
    
    return 0;
}