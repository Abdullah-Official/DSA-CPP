#include<iostream>
using namespace std;

int divide(int dividend, int divisor) {
    // Handle corner cases
    if (divisor == 0) return INT_MAX;
    if (dividend == INT_MIN && divisor == -1) return INT_MAX;
    if (divisor == 1) return dividend;

    // Initialize result
    int result = 0;

    // Determine the sign of the result
    int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;

    // Convert both operands to positive integers
    // and keep track of their signs
    if (dividend < 0) dividend = -dividend;
    if (divisor < 0) divisor = -divisor;

    // Shift the divisor left until it is larger than the dividend
    int shift = 0;
    while (divisor <= dividend) {
        divisor <<= 1;
        ++shift;
    }

    // Shift the divisor back right until it is smaller than the dividend
    while (shift > 0) {
        divisor >>= 1;
        --shift;

        // If the divisor is smaller than the dividend,
        // subtract it from the dividend and add 1 to the result
        if (dividend >= divisor) {
            dividend -= divisor;
            result = result +  1 << shift;
        }
    }

    // Return the result with the correct sign
    return sign * result;
}

int main(){
    cout << divide(40,8);
}