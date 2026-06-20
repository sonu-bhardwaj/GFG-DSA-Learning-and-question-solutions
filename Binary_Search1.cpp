/*
Recursive Binary Search Algorithm



*/



#include <bits/stdc++.h>
using namespace std;

int binarysearch(vector<int> &arr, int low, int high, int target)
{
    if(high>=low){
        int mid=low+(high-low)/2;
   
    if(arr[mid]==target){
        return mid;
    }
    if(arr[mid]>target){
        return binarysearch(arr,low,mid-1,target);
    }
    if(arr[mid]<target){
        return binarysearch(arr,mid+1,high,target);
    }
    
    }
    
        cout << "Element not found in the array";
        return -1;
 
}

int main() {

    vector<int> arr = {10, 20, 30, 40, 50};
    int low=0;
    int high=arr.size()-1;
    int target=110;
    int result=binarysearch(arr,low,high,target);
    cout<<result<<endl;

}