#include<iostream>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col){
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            if(arr[row][col] == target){
                return 1;
            }
        }
    }
    return 0;
}

void rowWiseSum(int arr[][3], int row, int col){
    
    for(int row = 0; row < 3; row++){
         int sum = 0;
        for(int col = 0; col < 3; col++){
            sum+=arr[row][col];
        }
        cout << sum << " ";
    }
}

void LargestRowSum(int arr[][3], int row, int col){
    int maxi = 0;
    int largestRow = -1;
    for(int row = 0; row < 3; row++){
        
         int sum = 0;
        for(int col = 0; col < 3; col++){
            sum+=arr[row][col];
        }
        if(sum>maxi){
            maxi = sum;
            largestRow = ++row;
        }
       
    }
    cout << "The Largest Row Sum is: " << largestRow;
}


int main(){
    // int arr[3][3] = {1,2,3,4,5,6,7,8,9}; // Hard code input (row-wise)

    // int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}}; // Hard code input (row-wise) 2nd way

    int arr[3][3];
 
    // ROW WISE INPUT 
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            cin >> arr[row][col];
        }
    }

    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            cout << arr[row][col] << " ";
        }
        cout <<endl;
    }

    cout << "Row Wise Sum of 2D Array is: " << endl;
    rowWiseSum(arr,3,3);
    cout << endl;
    LargestRowSum(arr,3,3);

    // LINEAR SEARCH IN 2D ARRAY !!!!
    // cout << "Enter element to search: " << endl;
    // int target;
    // cin >> target;
    // if(isPresent(arr, target, 3, 3)){
    //     cout << "Element found!" << endl;
    // }else{
    //     cout << "Element not found!" << endl;
    // }








     // COL WISE INPUT 
    // for(int col = 0; col < 3; col++){
    //     for(int row = 0; row < 3; row++){
    //         cin >> arr[row][col];
    //     }
    // }

    // for(int col = 0; col < 3; col++){
    //     for(int row = 0; row < 3; row++){
    //         cout << arr[col][row] << " ";
    //     }
    //     cout <<endl;
    // }

    return 0;
}