/*
! Leaders in an array.

Todo: Given an array arr[] of size n, the task is to find all the Leaders in the array. An element is a Leader if it is greater than or equal to all the elements to its right side.

? Note: The rightmost element is always a leader.

Examples:

Input: arr[] = [16, 17, 4, 3, 5, 2]
Output: [17 5 2]
Explanation: 17 is greater than all the elements to its right i.e., [4, 3, 5, 2], therefore 17 is a leader. 5 is greater than all the elements to its right i.e., [2], therefore 5 is a leader. 2 has no element to its right, therefore 2 is a leader.

Input: arr[] = [1, 2, 3, 4, 5, 2]
Output: [5 2]
Explanation: 5 is greater than all the elements to its right i.e., [2], therefore 5 is a leader. 2 has no element to its right, therefore 2 is a leader.


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {16, 17, 4, 3, 5, 2};

    // * To find the leader we keep tracking of right element if is smaller if greater break the loop and store leader in seperate vector

    vector<int> temp;

    for (int i = 0; i < arr.size(); i++)
    {

        int leader = true;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] < arr[j])
            {
                leader = false;
                break;
            }
        }
        if (leader)
        {
            temp.push_back(arr[i]);
        }
    }

    cout << "Leaders are: ";
    for (int items : temp)
    {
        cout << items << " ";
    }
}
