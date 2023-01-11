#include<iostream>
using namespace std;


void fib(int n){

    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for(int i=1; i<=n; i++){
        int x = a + b;
        cout <<  x << " ";
        a = b;
        b=x;
    }
}


int main(){
     fib(8);
}