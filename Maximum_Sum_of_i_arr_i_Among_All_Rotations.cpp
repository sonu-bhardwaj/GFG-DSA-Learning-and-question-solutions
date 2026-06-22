/*
! Maximum_Sum_of_i*arr_i_Among_All_Rotations

TODO: Given an integer array arr[] of size n, find the maximum value of the expression i * arr[i] (for all i from 0 to n-1) after rotating the array any number of times.


Input: arr[] = [8, 3, 1, 2]
Output: 29
Explanation: Out of all the possible configurations by rotating the elements: arr[] = [3, 1, 2, 8] here (3*0) + (1*1) + (2*2) + (8*3) sum is maximum i.e. 29.

Input: arr[] = [1, 2, 3]
Output: 8
Explanation: Out of all the possible configurations by rotating the elements: arr[] = [1, 2, 3] here (1*0) + (2*1) + (3*2) sum is maximum i.e. 8.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3};

   //my approach first check how many rotation which is outer loop then inside i will calculate array sum  using one loop and using another loop i will rotate, we can also use max   method to find the maximum between sum and maxSum



    int maxSum=INT_MIN;

    for(int k=0;k<arr.size();k++) {
        int sum = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            sum += i * arr[i];
        }

    //  maxSum=max(sum,maxSum);
    
    if(sum>maxSum){
        maxSum=sum;
    }
    // now we rotate the array by one
    int last = arr[arr.size() - 1];
    for (int j = arr.size() - 1; j > 0; j--)
    {
        arr[j] = arr[j - 1];
    }
    arr[0] = last;
    }
cout<<maxSum;

}