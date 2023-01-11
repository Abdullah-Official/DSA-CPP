#include<iostream>
#include<math.h>
using namespace std;

int main(){
    // Right most set Bit
    int n;
    cin >> n;
    int ans = 0;
    int res = n&(-n);
    int i = 0;
    while(res != 0){
        int bit = res&1;
        ans = (bit*pow(10,i)) + ans;
        res = res >> 1;
        i++;
    }
    cout << ans;
}