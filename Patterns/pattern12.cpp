#include<iostream>
using namespace std;


int main(){
    // Patter #12

    /*
    A B C
    B C D
    C D E
    */
   int i = 1;
   int n;
   cin >> n;
   while(i<=n){
    int j = 1;
    while(j<=n){
        char ch = 'A' + i + j - 2;
        cout << ch << " ";
        j++;
    }
    cout << endl;
    i++;
   }
}