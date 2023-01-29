#include <iostream>
using namespace std;

int binarySearch(int *arr, int key, int start, int end)
{
    // base case

    if (start > end)
    {
        return 0;
    }
    int ans = -1;
    
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return arr[mid];
        }
        else if (key > arr[mid])
        {
            ans = binarySearch(arr, key, start = mid + 1, end);
        }
        else
        {
            ans = binarySearch(arr, key, start, end = mid - 1);
        }
    

    return ans;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 22};
    int start = 0;
    int end = 5;
    int key = 22;
    int ans = binarySearch(arr, key, start, end);
    if (ans)
    {
        cout << "Element Found : " << ans << endl;
    }
    else
    {
        cout << "Element not Found!" << endl;
    }
}