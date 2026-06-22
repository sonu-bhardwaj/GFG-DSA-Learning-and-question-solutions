/*
!Rearrange Array by Sign

TODO: Given an array arr[] of size n, the task is to rearrange it in alternate positive and negative manner without changing the relative order of positive and negative numbers. In case of extra positive/negative numbers, they appear at the end of the array.

* Note: The rearranged array should start with a positive number and 0 (zero) should be considered as a positive number.

Examples:

Input:  arr[] = [1, 2, 3, -4, -1, 4]
Output: arr[] = [1, -4, 2, -1, 3, 4]

Input:  arr[] = [-5, -2, 5, 2, 4, 7, 1, 8, 0, -8]
Output: arr[] = [5, -5, 2, -2, 4, -8, 7, 1, 8, 0]

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};

    vector<int> pos;
    vector<int> neg;

    // Separate positive and negative numbers
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] >= 0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }

    cout << "Positive: ";
    for (int x : pos)
        cout << x << " ";

    cout << "\nNegative: ";
    for (int x : neg)
        cout << x << " ";

    vector<int> ans;

    int p = 0, n = 0;

    // Alternate positive and negative
    while (p < pos.size() && n < neg.size())
    {
        ans.push_back(pos[p]);
        p++;

        ans.push_back(neg[n]);
        n++;
    }

    // Add remaining positives
    while (p < pos.size())
    {
        ans.push_back(pos[p]);
        p++;
    }

    // Add remaining negatives
    while (n < neg.size())
    {
        ans.push_back(neg[n]);
        n++;
    }

    cout << "\nFinal Array: ";
    for (int x : ans)
        cout << x << " ";

    return 0;
}