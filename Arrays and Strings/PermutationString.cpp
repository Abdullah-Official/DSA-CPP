#include<iostream>
#include<string>
using namespace std;


bool checkEqual(int count1[], int count2[]){
    for(int i = 0; i < 26; i++){
        if(count1[i] != count2[i]){
            return 0;
        }
    }
    return 1;
}

bool checkInclusion(string s1, string s2){

    if(s1.length() > s2.length()){
        return 0;
    }
    // storing count for s1
    int count1[26] = {0};
    for(int i = 0; i< s1.length(); i++){
        int index = s1[i] - 'a';
        count1[index]++;
    }

    int count2[26] = {0};
    int windowSize = s1.length();
    int i = 0;
    // pehli window k liye chalaya
    while(i<windowSize){
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    if(checkEqual(count1, count2)){
        return 1;
    }
    // window ko aagy barhaya
    while(i<s2.length()){

        int newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        int OldChar = s2[i-windowSize];
        index = OldChar - 'a';
        count2[index]--;
        i++;

         if(checkEqual(count1, count2)){
        return 1;
    }
    }

}

int main(){

    string s1 = "abp";
    string s2 = "eidbaooo";
    cout << checkInclusion(s1,s2);

    return 0;
}


//  int i = 0;
//         while(i<s.length()){
//             if(s[i] == s[i+1]){
//                 s.erase(i,2);
//                 i = 0;
//             }else{
//                 i++;
//             }
//         }
//         return s;