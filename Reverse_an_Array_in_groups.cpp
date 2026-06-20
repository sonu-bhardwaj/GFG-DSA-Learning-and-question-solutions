/*
! Reverse an Array in groups

TODO:
Given an array arr[] and an integer k,
find the array after reversing every subarray of consecutive k elements in place.
If the last subarray has fewer than k elements, reverse it as it is.
 Modify the array in place, do not return anything

Example 1:
 Input: arr[] = [1, 2, 3, 4, 5, 6, 7, 8], k = 3
 Output: [3, 2, 1, 6, 5, 4, 8, 7]


Example 3
Input: arr[] = [5, 6, 8, 9], k = 5
Output: [9, 8, 6, 5]



*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {5, 6, 8, 9};

    cout << "Original Array:";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int group;
    cout << "Enter the value of group you want to make: ";
    cin >> group;

    // using two pointer method
    for (int i = 0; i < arr.size(); i += group)
    {
        int left = i;
        int right = left + group - 1;

        while (left < right)
        {
            right = right > arr.size()-1 ? right=arr.size() - 1 : right;

            swap(arr[right], arr[left]);

            left++;
            right--;
        }

       
    }
 

    cout << "Reversed Array:";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}