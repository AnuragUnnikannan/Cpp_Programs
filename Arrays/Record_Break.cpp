/*
    A day is said to be a record breaking day if, number of visitors in that day is greater than all the previous days AND also greater than the following day. Count the number of record breaking days.
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
    int mx = -1;
    int count = 0;
    for(int i = 0;i<n-1;i++)
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