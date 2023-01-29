#include<iostream>
using namespace std;

void print(int *p){
    cout << *p << endl;
}

void update(int *p){
    *p = *p + 1;
    cout << "inside " << *p << endl; // print 6 as refer to value

    //  p = p + 1;
    // cout << "inside " << p << endl; // print updated address as refer to addres
}

int getSum(int *arr, int n) {

    cout << endl << "Size : " << sizeof(arr) << endl;

    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += arr[i];
    }
    return sum;
}

int main(){
    int num = 5;
    int *p = &num;

    // // print(p);
    cout << "Before update: " << *p << endl;
    update(p);
    cout << "After update: " << *p;

    // int arr[6] = {1,2,3,4,5,8};

    // cout << "Sum is " << getSum(arr+3 ,3) << endl ;  
}