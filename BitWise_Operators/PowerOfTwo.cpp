#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    // first approach (Brute Force)

    // for(int i=0; i<=30;i++){
    //        int ans = pow(2,i);
    //        if(ans == n){
    //            return true;
    //        }
    //    }
    //     return false;

    // Optimized Approach

    // int ans = 1;
    // for(int i=0; i<=30;i++){
    //      if(ans == n){
    //            return true;
    //        }
    //    ans = ans << 1;
          
    //    }
    //     return false;


    // Best Approach

    // As we know, a number is power of two or a multiple of two if it has only one bit set in its binary representation,
    //  so if I do N & (N-1) then the result should be 0 for a number to be a power of 2.
    
        int temp = n&(n-1);
        if(temp == 0){
            return true;
        }
        return false;
}