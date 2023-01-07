#include<iostream>
using namespace std;


int main(){
    // Patter #17 THE DABANGGG PATTTERNNNNNNN

    /*
    1 2 3 4 5 5 4 3 2 1
    1 2 3 4 * * 4 3 2 1
    1 2 3 * * * * 3 2 1
    1 2 * * * * * * 2 1
    1 * * * * * * * * 1
    */

      cout << endl;
    cout << "You are going to see dabangg pattern:- " << endl;

    int n;
    cout << endl;
    cout << "Enter height of the pattern:- ";
    cout << endl;
    cin >> n;
    cout << endl;

    int i=1;
    while(i<=n){
        //first triangle;
        int j = 1;
        while(j<=(n-i+1)){
            cout << j << " ";
            j++;
        }

        //second triangle

        int k =1;
        while(k<=i-1){
            cout << "* ";
            k++;
        }

        //3rd triangle

         int l =1;
        while(l<=i-1){
            cout << "* ";
            l++;
        }

        //4th triangle

        int m = n - i + 1;
        while(m>= 1){
            cout << m << " " ;
            m--;
        }


        cout << endl;
        i++;
    }
   
}