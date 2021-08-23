/*
    Check if there exists 2 elements in an array such that their sum is equal to given k
*/
#include<iostream>
#include<algorithm>
using namespace std;
bool pairsum(int arr[], int n, int k)
{
    // brute force  o(n^2)
    /* for(int i = 0;i<n-1;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(arr[i] + arr[j] == k)
            {
                cout << i << " " << j << endl;
                return true;
            }
        }
    } */

    // faster method  O(n)
    // works on sorted array
    int low = 0, high = n-1;
    while(low < high)
    {
        if(arr[low] + arr[high] < k)
        {
            low++;
        }
        else if(arr[low] + arr[high] > k)
        {
            high--;
        }
        else
        {
            cout << low << " " << high << endl;
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cout << "Enter number of elements:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter sum: " << endl;
    int k;
    cin >> k;
    pairsum(arr, n, k);
    return 0;
}