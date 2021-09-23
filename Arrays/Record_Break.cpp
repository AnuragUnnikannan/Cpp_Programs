/*
    A day is said to be a record breaking day if, number of visitors in that day is greater than all the previous days AND also greater than the following day. Count the number of record breaking days.
    
    Sample input and output:
    Enter number of elements:
    5
    Enter 5 elements:
    4 3 7 5 12
    3
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of elements: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
    }
    if(n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    int mx = INT_MIN;
    int count = 0;
    for(int i = 0;i<n;i++)
    {
        if(arr[i] > mx && arr[i] > arr[i+1])
        {
            count++;
        }
        mx = max(mx, arr[i]);
    }
    cout << count << endl;
    return 0;
}