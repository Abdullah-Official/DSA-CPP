#include<iostream>
using namespace std;

void findDuplicate(int arr[], int n){

    // Har number ki occurence ko 2 bar krdia or duplicate wale ko 3 bar;

    int ans = 0;
    //XORing to remove duplicate or to find all unique
    for(int i = 0; i < n; i++){
        ans^=arr[i];
    }
    //XORing ans with all indexes in this way all unique will cancel out and remaining one will be duplicat.
    for(int j =1; j < n; j++){
        ans^=j;
    }
    cout << ans;
}

void findDuplicateBrute(int arr[], int n) {
    for(int i=0; i < n; i++){
        for(int j=i+1; j < n; j++){ // need to start inner loop from i+1 because it wont compare itself again
            if((arr[i]-arr[j]) == 0){
                std::cout << arr[i] << " is a duplicate" << std::endl;
            }
        }
    }
}

int main(){
    int arr[7] = {5,1,3,2,4,2,3};
    // findDuplicate(arr, 6);
    findDuplicateBrute(arr,7);
    // cout << (3^1); // for this input
}