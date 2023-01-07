#include<iostream>
using namespace std;


int main(){
    // Patter #13

    /*
    A 
    B C 
    D E F
    G H I J
    */
   int i = 1;
   int n;
   cin >> n;
    int val = 65;
   while(i<=n){
    int j = 1;
    while(j<=i){
        char ch = val;
        cout << ch << " ";
        val++;
        j++;
    }
    
    cout << endl;
    i++;
   }
}