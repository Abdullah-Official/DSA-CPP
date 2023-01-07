#include<iostream>
using namespace std;

int main(){

    // Patter #10

    /*
    A A A
    B B B
    C C C
    */

   int n;
   cin >> n;
    int i = 1;
    char ch = 65;
   while(i<=n){
    int j = 1;
    while(j<=n){
        cout << ch << " ";
        j++;
    }
    cout << endl;
    ch++;
    i++;
   }


    return 0;
}