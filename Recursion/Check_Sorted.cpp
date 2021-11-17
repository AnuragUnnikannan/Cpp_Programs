/*
    Checks whether an array is sorted in ascending order or not. Returns 1 if sorted, else 0
*/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool sorted(int arr[], int n)
{
    if(n == 1)
    {
        return true;
    }
    else
    {
        return (arr[0] < arr[1] && sorted(arr+1, n-1));
    }
}

int main()
{
    int n;
    cout << "Enter size of array:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << sorted(arr, n) << endl;
    return 0;
}