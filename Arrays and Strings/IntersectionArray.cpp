#include<vector>
#include<iostream>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i = 0, j = 0;
    vector<int> ans;
    while(i<n && j<m) {
    
    if(arr1[i]==arr2[j])
    {
    	ans.push_back(arr1[i]);
        i++;
        j++;
    }
    else if (arr1[i] < arr2[j]) {
  		i++;
    }
    else
    {
    	j++;
    }
    
    }
    return ans;
}

void intersection(int arr1[], int arr2[], int n, int m) {
    int temp[1000] = {0};
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr2[j] < arr1[i]) {
            j++;
        } else {
            temp[i] = arr2[j];
             cout << arr1[i];
            i++; j++;
        }
    }
}








int main(){
    int arr1[3] = {3,4,5};
    int arr2[5] = {1,2,3,4,5};
    intersection(arr1,arr2,5,3);
    // cout << findArrayIntersection(arr1,3, arr2,5);
}