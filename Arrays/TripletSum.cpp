#include<iostream>
#include <algorithm>
using namespace std;

void findTripletSum(int arr[], int n, int sum){
    sort(arr, arr+n);
    
    for(int i =0; i<n; i++){
        int left = i+1;
        int right = n-1;
        while(left < right){
            int curr_sum = arr[i] + arr[left] + arr[right];
            if(curr_sum == sum){
            cout << arr[i] << " " << arr[left] << " " << arr[right] <<endl;
            break;
            // exit(1);
        }else if(curr_sum < sum){
            
            left++;
        }else{
            right--;
        }
        }
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int sum = 9;
    int n = sizeof(arr)/sizeof(arr[0]);
    findTripletSum(arr,n,sum);

}