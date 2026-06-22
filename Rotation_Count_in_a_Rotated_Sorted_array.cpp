/*
! Given a sorted array arr[] (in strictly increasing order) that has been right-rotated k times. A right rotation means the last element is moved to the first position, and the remaining elements are shifted one position to the right. Find the value of k the number of times the array was right-rotated from its originally sorted form.

todo: Examples:

Input: arr[] = [15, 18, 2, 3, 6, 12]
Output: 2
Explanation:
Original sorted array = [2, 3, 6, 12, 15, 18]
After 2 right rotations → [15, 18, 2, 3, 6, 12]

Input: arr[] = [7, 9, 11, 12, 5]
Output: 4
Explanation:
Original sorted array = [5, 7, 9, 11, 12]
After 4 right rotations → [7, 9, 11, 12, 5]

Input: arr[] = [7, 9, 11, 12, 15]
Output: 0
Explanation: Array is already sorted, so k = 0


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {15, 18, 2, 3, 6, 12};
    
//find the smallest item and its index from the array
// if we look in to array is sorted but divided in to two part 
// so we find the minimum element and its index and that indext is the answer(for searching we use iteration method or binary search)


int min=arr[0];
int index=0;

// this is regular method to searh element using iteration
for(int i=0;i<arr.size();i++){
    if(min>arr[i]){
        min=arr[i];
        index=i;
    }
}




cout<<"No of rotation is: "<<index;


}