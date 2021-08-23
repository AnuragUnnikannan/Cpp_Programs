/*
    Print each of the maximum element within 0 to ith position
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of elements: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: " << endl;
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
    }
    int mx = INT_MIN;
    for(int i = 0;i<n;i++)
    {
        mx = max(mx, arr[i]);
        cout << mx << endl;
    }
    return 0;
}