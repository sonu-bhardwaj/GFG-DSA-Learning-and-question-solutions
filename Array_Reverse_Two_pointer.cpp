/*
! Array Reverse  (use swap method) we can also use reverse function

TODO:
Reverse an array such that the first element becomes the last,
the second becomes the second-last, and so on.

Example 1:
Input : [1, 4, 3, 2, 6, 5]
Output: [5, 6, 2, 3, 4, 1]

Example 2:
Input : [4, 5, 1, 2]
Output: [2, 1, 5, 4]


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {4, 5, 1, 2};
   
    cout << "Original Array:";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

//using two pointer method
int left=0, right=arr.size()-1;


while(left<right){ 
    swap(arr[left],arr[right]);

    left++;
    right--;

}

 
    cout << endl;

    cout << "Reversed Array:";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}