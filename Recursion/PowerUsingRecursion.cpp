#include<iostream>
using namespace std;

long long int power(int a , int b){
    //base case
    if( b == 0 )
        return 1;

    if(b == 1)
        return a;
        

    return 2*power(a,b);
}

int main(){
    int a,b;
    cin >> a >> b;
    cout << power(a,b);
}