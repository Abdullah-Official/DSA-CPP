#include<iostream>
using namespace std;

int add(int a, int b) {
    // Iterate until there are no more carry bits
    while (b != 0) {
        // Perform a bitwise AND to find the carry bits
        int carry = a & b;
        

        // Perform a bitwise XOR to find the sum without carry bits
        a = a ^ b;

        // Shift the carry bits left by 1 bit
        b = carry << 1;
    }

    return a;
}

int main(){
    int a = 12;
    int b = 12;
    int sum,carry;
    while(carry!=0) {
         sum = a^b;
         carry = (a&b) << 1;
         a = sum;
         b= carry;
    }

    cout << sum;
}