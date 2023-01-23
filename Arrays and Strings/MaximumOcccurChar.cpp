#include<iostream>
#include<string>
using namespace std;


char getMaxOccurance(string s){
    int arr[26] = {0};
    
    for(int i = 0; i<s.length(); i++){
        char ch = s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }
    int maxi = 0;
    int ans = -1;

    for(int i = 0; i < 26; i++){
        if(arr[i] > maxi){
            ans = i;
            maxi = arr[i];
        }
    }
    char finalChar = 'a'+ans;
    return finalChar;

}


int main(){

    // string s;
    // cin >> s;
    // cout << "The Maximum occur character is: " << getMaxOccurance(s) << endl;

    cout << 19+'a';
    return 0;
}