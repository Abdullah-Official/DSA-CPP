#include<iostream>
#include<vector>

using namespace std;

void rotateArray(vector<int>& nums, int n , int k){
    vector<int> temp;

    for(int i = 0; i<n; i++){
        temp[(i+k)%n] = nums[i];
    }

    nums = temp;
   
}

void printArray(vector<int>& nums, int n ){
    
     for(int i = 0; i < n; i++){
        cout << nums[i];
    }
}

int main(){
    vector<int> nums = {1,2,3,4};
    int n = nums.size();
    int k = 3;
    rotateArray(nums, n , k);
    printArray(nums,n);
    cout << "Hello";

}