/*
! Minimum in a Sorted and Rotated Array

TODO: Given a sorted array of distinct elements arr[] of size n that is rotated at some unknown point, the task is to find the minimum element in it.


Examples:

Input: arr[] = [5, 6, 1, 2, 3, 4]
Output: 1
Explanation: 1 is the minimum element present in the array.

Input: arr[] = [3, 1, 2]
Output: 1
Explanation: 1 is the minimum element present in the array.

Input: arr[] = [4, 2, 3]
Output: 2
Explanation: 2 is the only minimum element in the array

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {5, 6, 1, 2, 3, 4};

    int low = 0;
    int high = arr.size() - 1;
    int element;

    while (low < high)
    {
        if (low < high)
        {
            arr[low];
        }
        int mid = low + (high - low) / 2;
        if (arr[mid] > arr[high])
        {
            low = mid + 1;
        }
        else
            high = mid;
    }
    element=arr[low];

    cout << "lowest element is :" << element;
}