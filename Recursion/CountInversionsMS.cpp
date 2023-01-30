#include <iostream>
using namespace std;

long long merge(int *arr, int s, int e, int &inv)
{

    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values

    int mainArrayIndex = s; // starting index of first array
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1; // starting index of second array
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // merge arrays in sorted fashion

    int i = 0;
    int j = 0;
    mainArrayIndex = s;
    while (i < len1 && j < len2)
    {
        if (first[i] < second[j])
        {
            arr[mainArrayIndex++] = first[i++];
        }
        else
        {
            arr[mainArrayIndex++] = second[j++];
            inv += len1 - i; // because jb left ka ek bara ha to baki bh bare hongy because array sorted hain
        }
    }

    while (i < len1)
    {
        arr[mainArrayIndex++] = first[i++];
    }

    while (j < len2)
    {
        arr[mainArrayIndex++] = second[j++];
    }

    delete[] first;
    delete[] second;

    return inv;
}

long long mergeSort(int *arr, int s, int e, int &inv)
{

    if (s >= e)
    {
        return inv;
    }
    int mid = s + (e - s) / 2;
    mergeSort(arr, s, mid, inv);     // left part
    mergeSort(arr, mid + 1, e, inv); // right part
    merge(arr, s, e, inv);

    return inv;
}

int main()
{
    int arr[] = {1, 20, 6, 4, 5};
    int n = 5;
    int inv = 0;
    cout << mergeSort(arr, 0, n - 1, inv);
}