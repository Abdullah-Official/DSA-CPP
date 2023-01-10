#include<iostream>
#include<math.h>
using namespace std;


int main(){

     int n;
    cin >> n;
    int absoluteVal = abs(n);
    // cout << absoluteVal;

    int ans  = 0;
    int i = 0;
    while(absoluteVal != 0 ) {

        int bit = absoluteVal&1;
        ans = (bit*pow(10,i)) + ans;
        absoluteVal=absoluteVal>>1;
        i++;

    }
    int comp;
    int j = 0;
   while(ans!=0){
        int convertedBit = ans^1;
        cout<< convertedBit;
        ans = ans >> 1;
        j++;
   }
    
    
    return 0;
}