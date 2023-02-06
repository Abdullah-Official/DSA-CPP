// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

 int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
    int left = 0, right = n - 1, ans = 0;
    while (left <= right) {
        if (nums[left] + nums[right] <= target) {
            ans = (ans + 1);
            right--;
        }
        right--;
    }
    return ans+1;
    }


int main() {
    // Write C++ code here
   vector<int> nums = {3,3,6,8};
   int target = 9;
   cout<< numSubseq(nums,target);
    return 0;
}