/*

Input: arr[] = {1, 2, 3, 4, 5, 6}, d = 2
Output: {5, 6, 1, 2, 3, 4}
Explanation: After first right rotation, arr[] becomes {6, 1, 2, 3, 4, 5} and after the second rotation, arr[] becomes {5, 6, 1, 2, 3, 4}

Input: arr[] = {1, 2, 3}, d = 4
Output: {3, 1, 2}
Explanation: The array is rotated as follows:


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int d;
    cout << "Enter no of times you want to  rotate: ";
    cin >> d;

    cout << "1. Clockwise\n";
    cout << "2. Anticlockwise\n";
    cout << "Choose rotation direction: ";

    int choice;
    cin >> choice;
    cout<<endl;
    cout<<"Array before rotation: ";
    for(int items:arr){
        cout<<items<<" ";
    }


    switch (choice)
    {
        case 1:
        for (int i = 0; i < d; i++)
        {
            int last = arr[arr.size() - 1];
            for (int i = arr.size() - 1; i > 0; i--)
            {
                arr[i] = arr[i - 1];
            }
            arr[0] = last;
        }
        break;
        case 2:
            for (int i = 0; i < d; i++)
            {
                int first = arr[0];
                for (int i = 0; i > arr.size() - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }
                arr[arr.size() - 1] = first;
            }
            break;
        }
   

    
    cout<<endl;
    cout << "Array after rotation:  ";
    for (int items : arr)
    {
        cout << items << " ";
    }
}