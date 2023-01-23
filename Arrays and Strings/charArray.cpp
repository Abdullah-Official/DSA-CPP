#include <iostream>
#include <algorithm>
using namespace std;

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverseString(char name[])
{

    int i = 0;
    int j = getLength(name) - 1;
    while (i < j)
    {
        swap(name[i], name[j]);
        i++;
        j--;
    }
}

void printString(char name[])
{
    int n = getLength(name);
    for (int i = 0; i < n; i++)
    {
        cout << name[i];
    }
    cout << endl;
}

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool isPalindrome(char str[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        if (toLowerCase(str[start]) != toLowerCase(str[end]))
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}

int main()
{

    char name[20];
    // cout << "Enter your name: ";
    // cin >> name;
    // cout << endl;
    // cout << "Your name is " << name << endl;

    // Length of the string;

    // cout << "The Length of the string is: " << getLength(name) <<endl;
    // reverseString(name);
    // cout << "Reverse of String is: ";
    // printString(name);

    char str[20];
    cout << "Enter string: ";
    cin >> str;
    int n = getLength(str);
    cout << "String is Palindrom?: " << isPalindrome(str, n) << endl;

    return 0;
}