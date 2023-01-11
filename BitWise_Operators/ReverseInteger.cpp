#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter number to reverse: ";
    cin >> n;
    int ans = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
        { // for range of integer i.e [2^31 , 2^31 -1 ]
            return 0;
        }
        ans = (ans * 10) + digit;
        n = n / 10;
    }
    cout << "Reversed Integer/Number is: " << ans;
}