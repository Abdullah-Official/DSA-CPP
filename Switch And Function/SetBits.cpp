#include<iostream>
using namespace std;


int noSetBits(int n){
   int count = 0;
    while(n!=0){
        int rsmb = n&(-n);
        n = n - rsmb;
        count++;
    }

    return count;
}

int totalSetBits (int a,int b)  {

    int first = noSetBits(a);
    int second = noSetBits(b);
    int totalBits = first + second;
    return totalBits;
    
}

int main(){
    cout << totalSetBits(3,2);
}