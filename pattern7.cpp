#include<iostream>
using namespace std;

int main(){

    // Patter #07

    /*
    1
    2 3
    4 5 6
    7 8 9 10 
    */

   int n;
   cin >> n;
    int i = 1;
    int count = 1;
   while(i<=n){
    int j = 1;
    while(j<=i){
        cout << count << " ";
        count+=1;
        j++;
    }
    cout << endl;
    i++;
   }


    return 0;
}