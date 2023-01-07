#include <iostream>
using namespace std;
int main() {
    // int a = 'a';
    // cout << a << endl;
    // char ch = 98;
    // cout << ch;

    // float a = 2/5;
    // cout << a;

    int n;
    cin >>n;
    int i = 1;
    int sum = 0;
    while(i<=n){
        if(i%2 ==0){
            sum = sum + i;
            i++;
        }
        i++;
    }
    cout << "The total sum is: " << sum;
    return 0;
}