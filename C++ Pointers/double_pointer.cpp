#include<iostream>
using namespace std;

int main(){
    int i = 5;
    int* ptr = &i;
    int** ptr2 = &ptr;
    cout << &i << endl;
    cout << **ptr2 << endl; // print '5'
     cout << ptr2 << endl; // address of ptr2
    cout << ptr << " = " << *ptr2 << endl; // address of i
}