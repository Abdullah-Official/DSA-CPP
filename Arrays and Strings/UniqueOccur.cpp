#include<iostream>
using namespace std;


bool hasUniqueOccurrences(int arr[], int n) {
    int occurrences[10001] = {0};
    for (int i = 0; i < n; i++) {
        occurrences[arr[i]]++;
    }

    int counts[10001] = {0};
    for (int i = 0; i < 10001; i++) {
        if (occurrences[i] == 0) continue;
        if (counts[occurrences[i]] != 0) return false;
        counts[occurrences[i]]++;
    }

    return true;
}

int main(){
    int arr[3] = {1,2};
     cout << hasUniqueOccurrences(arr, 3);
}