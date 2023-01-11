#include<iostream>
using namespace std;

int factorial(int n){
    if (n <= 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int nCr(int n, int r){
    int num = factorial(n);
    int denom = factorial(r)*factorial(n-r);
    int answer = num/denom;
    return answer;
}

int main(){
    cout << nCr(13,0);
}