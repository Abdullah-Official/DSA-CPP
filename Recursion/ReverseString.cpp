#include<iostream>
using namespace std;

// void reverseString(string& s, int left, int right){
    
//     if(left>right){
//         return;
//     }
//     swap(s[left], s[right]);
    
//     reverseString(s, left+1, right-1);

// }

//single pointer
void reverseString(string& s, int left) {
int right = s.length() - left - 1;
if (left < right) {
swap(s[left], s[right]);
reverseString(s, left + 1);
}
}



int main(){
    string str = "abcde";
    int n = str.length();
    cout << "Before: " << str << endl;
    // reverseString(str, 0, n-1);
    reverseString(str, 0);
    cout << "After: " << str << endl;
}