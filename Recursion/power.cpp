#include<iostream>
using namespace std;


int Power(int n){
    if(n==0){
        return 1;
    }
    return 2 * Power(n-1);
}

int main(){
    int n = 10;
    int ans = Power(n);
    cout << "Power is: " << ans << endl;
}