/*
    Print the sum of all possible subarrays
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
    int sum = 0;
    for(int i = 0;i<n;i++)
    {
        for(int j = i;j<n;j++)
        {
            sum = sum + arr[j];
            cout << sum << endl;
        }
        sum = 0;
    }
    return 0;
}