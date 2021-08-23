/*
    Print the sum of maximum circular subarray
*/
#include<iostream>
#include<algorithm>
using namespace std;
int kadane(int arr[], int n)
{
    int maxSum = arr[0];
    int maxSoFar = arr[0];
    for(int i = 1;i<n;i++)
    {
        maxSoFar = max(arr[i], maxSoFar + arr[i]);
        if(maxSoFar > maxSum)
        {
            maxSum = maxSoFar;
        }
    }
    return maxSum;
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
    int wrapSum;
    int nonWrapSum;
    //storing maximum sum of subarray (nonwrapped means, non circular)
    nonWrapSum = kadane(arr, n);
    int totalSum = 0;
    for(int i = 0;i<n;i++)
    {
        totalSum += arr[i];
        //changing the sign of all elements
        arr[i] = -arr[i];
    }
    //wrapsum means circular sum
    //wrapsum = total sum of array + sum of non contributing elements
    wrapSum = totalSum + kadane(arr, n);
    cout << max(wrapSum, nonWrapSum) << endl;
    return 0;
}