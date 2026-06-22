/*
! Generating All Subarrays
TODO: Given an array arr[], the task is to generate all the possible subarrays of the given array.
Examples:

Input: arr[] = [1, 2, 3]
Output: [ [1], [1, 2], [2], [1, 2, 3], [2, 3], [3] ]

Input: arr[] = [1, 2]
Output: [ [1], [1, 2], [2] ]

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
vector<int>arr={1,2,3};

cout<<"All sub arrays are: "<<endl;

for(int i=0;i<arr.size();i++){
    for(int j=i;j<arr.size();j++){
        for (int k = i; k <= j; k++)
        {
            cout << arr[k] << " ";
        }
        cout<<endl;
    }
}

    

    
}