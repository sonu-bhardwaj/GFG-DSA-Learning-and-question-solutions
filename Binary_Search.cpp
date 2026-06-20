/*
Iterative Binary Search Algorithm



*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr = {10, 20, 30, 40, 50};
    int target = 850;

    int low=0;
    int high=arr.size()-1;
   

    while(low<=high){
        int mid = low + (high - low) / 2; // 2nd index which is 30
        if (arr[mid] == target)
        {
            cout << "Element found at index " << mid;
            break;
        }
    else if(arr[mid]<target){
        low=mid+1;
    }
    else if (arr[mid] > target)
    {
        high=mid-1;
    }
    }
    cout<<"Element not found in the array";
}
