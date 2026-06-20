/*
Check if an Array is Sorted

*/
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {};
    bool isSorted=true;
    int size=arr.size()-1;
    if(arr.size()>0 && arr.size()==1){

   
    for(int i=0;i<size;i++){
        if(arr[i]>arr[i+1]){
          
          isSorted=false;
          break;
        }
       
    }
    }
    else{
        cout<<"empty array";
    }
   cout<<"Array is sorted: "<<isSorted;


}