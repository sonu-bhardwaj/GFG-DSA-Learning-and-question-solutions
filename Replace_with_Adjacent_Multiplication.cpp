/*

Input: arr[] = [2, 4, 5]
Output: [8, 40, 20]
Explanation:
For index i = 0, arr[0] = 1 * arr[0] * arr[1] = 1 * 2 * 4 = 8
 For index i = 1, arr[1] = arr[0] * arr[1] * arr[2] = 2 * 4 * 5 = 40
 For index i = 2, arr[2] = arr[1] * arr[2] * 1 = 4 * 5 * 1 = 20
Thus, the updated array becomes [8, 40, 20].

Input: arr[] = [2, 5, 7, 8, 3]
Output: [10, 70, 280, 168, 24]
Explanation:
For index i = 0, arr[0] = 1 * arr[0] * arr[1] = 1 * 2 * 5 = 10
 For index i = 1, arr[1] = arr[0] * arr[1] * arr[2] = 2 * 5 * 7 = 70
 For index i = 2, arr[2] = arr[1] * arr[2] * arr[3] = 5 * 7 * 8 = 280
 For index i = 3, arr[3] = arr[2] * arr[3] * arr[4] = 7 * 8 * 3 = 168
 For index i = 4, arr[4] = arr[3] * arr[4] * 1 = 8 * 3 * 1 = 24
Thus, the updated array becomes [10, 70, 280, 168, 24].


*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2, 5, 7, 8, 3};
    cout<<"Size of original array is: "<<arr.size()<<endl;
    cout<<"Array is: ";
    for(int item:arr){
        cout << item<<" ";
    }
   cout<<endl;
    //now we creat temprory array
    vector<int>temp(arr.size());
    // cout<<temp.size();

    for(int i=0;i<arr.size();i++){
   int pre=(i==0)?1: arr[i-1];
   int next=(i== arr.size()-1) ? 1:arr[i+1];
     
   temp[i]=pre*arr[i]*next;
   

    }
    arr=temp;
    cout << "Updated Array is: ";
    for (int item : arr)
    {
        cout << item << " ";
    }
}