#include <iostream>
using namespace std;

bool palindrome(string s, int left, int right)
{
    if (left >= right) 
    {
        return true;
    } 
    else if (s[left] != s[right])
    {
        return false;
    } 
    else
    {
        return palindrome(s, left + 1, right - 1);
    }
}

int main()
{
    string str = "abcba";
    int n = str.length();

    int ans = palindrome(str, 0, n - 1);
    if (ans)
    {
        cout << "The given string is palindrome " << endl;
    }
    else
    {
        cout << "The given string is not palindrome" << endl;
    }
}