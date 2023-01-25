#include<iostream>
using namespace std;

int main() {
    // int num = 5;

    // // cout << "The address of Num is: " << &num;

    // int *ptr = &num;
    // cout << "The values is: " << *ptr << endl; // output is 5
    // cout << "The values is: " << *ptr << endl; // output is address of num;
    // cout << "Size of Intger is: " << sizeof(num) << endl; // we can also use *ptr for same outpout 
    // cout << "Size of pointer is: " << sizeof(ptr) << endl;

    char s[]= "hello";
char *p = s;
cout << s[0] << " " << p[0];
}