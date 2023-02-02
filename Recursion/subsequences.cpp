#include<iostream>
#include<vector>
using namespace std;

void printSubs(int ind, int n, vector<int> &ds, int arr[]){
    // base case
    if(ind == n){
        for(auto elem: ds){
            cout << elem << " ";
        }
        
        if(ds.size() == 0){
            cout << "{}";
        }
        cout << endl;
        return;
    }
    // take
    ds.push_back(arr[ind]);
    printSubs(ind+1, n, ds,arr);
    
    ds.pop_back(); // back track krlia, not take k liye bcz jo liya tha ab usko htado
    printSubs(ind+1, n, ds,arr);
}

int main(){
    vector<int> ds;
    int arr[3]  = {3,2,1};
    int n = 3;
    int ind = 0;
    printSubs(ind, n, ds, arr);
}