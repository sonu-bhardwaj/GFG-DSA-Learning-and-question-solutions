/*
! Array Reverse

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

int main(){

    vector<int> arr = {4, 5, 1, 2};
    vector<int>temp(arr.size());
cout<<"Original Array:";
for (int i = 0; i < arr.size(); i++)
{
    cout<<arr[i]<<" ";
}

    for(int i=0;i<arr.size();i++){
        temp[i]=arr[(arr.size()-1-i)];
    }
   arr=temp;
   cout<<endl;

   cout<<"Reversed Array:";
   for (int i = 0; i < arr.size(); i++)
   {
      cout<<arr[i]<<" ";
   }

}