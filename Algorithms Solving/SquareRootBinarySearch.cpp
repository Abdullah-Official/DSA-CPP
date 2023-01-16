#include<iostream>
using namespace std;


// Square Root Using binary Search...

long long int squareRootBS(int n){
   int start = 0;
    int end = n;
    long long int mid = start + (end-start)/2;
    long long int ans = -1;
    while(start<=end){
        long long int x = mid*mid;
        if(x > n){
            end = mid-1;
        }
        else if(x == n){
            return mid;
        }
        else{
            ans = mid;
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol) {
    // precision ==> no. of digits after decimal
    // n ==> number
    // tempSol ==> solution of squareRootBS
   double ans = tempSol;
    double factor = 1;
   for(int i=1; i<=precision; i++){
        factor = factor/10; // 1/10 = 0.1 ==> 0.1/10 = 0.01 ==> 0.00/10 = 0.0001 // for setting decimals after digits(how many required)
        for(double j=ans; j*j<n; j+=factor){
            ans = j;
        }
   }
   return ans;
}

int main(){
    int n;
    cout <<" Enter the number " << endl;
    cin >> n;

    int tempSol = squareRootBS(n);
    cout <<" Answer is " << morePrecision(n, 3, tempSol) << endl;

    return 0;
}