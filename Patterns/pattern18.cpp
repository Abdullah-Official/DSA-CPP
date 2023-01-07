#include<iostream>
using namespace std;


int main(){
    // Patter #13

    /*
    1  
   121 
  12321
 1234321
    */

   int n;
   cin >> n;

   int i =1;
   while(i<=n){


    //first triangle

    int j = 1;
    while(j<=(n-i)){
        cout << " ";
    j++;
    }

    // Second Triangle

    int k = 1;
    while(k<=i){
        cout << k;
        k++;
    }

    // third triangle
    int start = i - 1;  //3-1  = 2
    while(start > 0){ // 2
        cout << start; // 2
        start--;
    }


    cout << endl;
    i++;
   }
   
}