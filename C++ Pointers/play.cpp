#include<iostream>
using namespace std;


int main(){
    // int i = 5;
    // int *p = 0;
    // p = &i;
    // cout << p << endl; // address 
    // cout << *p << endl; // value
    // // Copying Pointers
    // int *q = p;
    // cout << p << " - " << q << endl; 
    //  cout << *p << " - " << *q << endl;

    int i = 3;
    int *t = &i;
    cout << t << endl; // address of i;
    *t = (*t) + 1; 
    cout << *t  <<  endl; 
    t = t + 1;
     cout << *t << endl;  // garbage value because addresses plused above
     cout << t << endl; // address of value after i ;;
     
}