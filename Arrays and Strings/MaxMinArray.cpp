#include<iostream>
using namespace std;


int main(){

    int arr[5] = {1,3,54,132,0};
    int max,min;
    for(int i = 0; i < 5; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
     for(int i = 0; i < 5; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout << "The Max: " << max << endl;
    cout << "The Min: " << min << endl;
}