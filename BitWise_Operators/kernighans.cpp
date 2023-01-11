#include<iostream>
using namespace std;

int main(){
    // Count number of set bits

    // Brute Force Approach
    int n;
    cin >> n;
    // int count = 0;
    // while(n!=0){
    //     if((n&1) == 1){
    //         count++;
    //     }
    //     n = n >> 1;
    // }
    // cout<< count;

    // Krenghans Algorithm with RSMB
    int count = 0;
    while(n!=0){
        int rsmb = n&(-n);
        n = n - rsmb;
        count++;
    }

    cout << count;
}