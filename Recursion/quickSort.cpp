#include<iostream>
using namespace std;

int partition(int *arr, int s, int e) {

    int pivot = arr[s]; // pivot (taking first value as pivot)

    // counting elements less than pivot;

    int count = 0;
    for(int i=s+1; i<=e; i++) {
        if(arr[i] <= pivot){
            count++;
        }
    }

    // Index of pivot we found
    int pivotMainIndex = s + count;
    swap(arr[pivotMainIndex], arr[s]); // swapping to place pivot to its correct position

    // Placing all elements less than pivot to its left side and greater on right side

    int i = s , j = e;
    while(i <= pivotMainIndex && j >= pivotMainIndex){
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i <= pivotMainIndex && j >= pivotMainIndex){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        
    }

    return pivotMainIndex;
    
}

void quickSort(int *arr, int s, int e) {

    //base case
    if(s>=e){
        return;
    }
    int pivot = partition(arr,s,e);
    quickSort(arr,s,pivot-1);
    quickSort(arr,pivot+1,e);
   

}

int main() {

    int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n = 15;

    quickSort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}


