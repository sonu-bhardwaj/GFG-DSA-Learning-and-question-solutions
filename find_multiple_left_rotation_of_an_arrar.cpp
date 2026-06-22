/*
! Quickly find multiple left rotations of an array | Set 1

TODO: Given an array of size n and multiple values around which we need to left   rotate the array. How to quickly find multiple left rotations?

Input: arr[] = {1, 3, 5, 7, 9}
            k1 = 14
Output: 9 1 3 5 7



*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9};
    int n = arr.size();
    int rotation;
    cout << "Enter the number of rotation: ";
    cin >> rotation;

    cout << "Element befor Rotation: ";
    for (int items : arr)
    {
        cout << items << " ";
    }

    cout << endl;
    rotation = rotation % n;
    cout<<"Rotation is: "<<rotation<<endl;
  

    // if rotation is equal to size of array
    for (int r = 0; r < rotation; r++)
    {
        int first = arr[0];

        for (int i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        arr[n - 1] = first;
    }

    cout << "Array after rotation: ";

    for (int items : arr)
    {
        cout << items << " ";
    }
}