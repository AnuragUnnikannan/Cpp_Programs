/*
    Print maximum sum of subarray of an array
    
    Sample input and output:
    Enter number of elements:
    5
    Enter 5 elements:
    2 -7 17 -4 -35 12
    17
*/

#include<iostream>
#include<algorithm>
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
    //brute force  O(n^3)
    /*int maxSum = INT_MIN;
    for(int i = 0;i<n;i++)
    {
        for(int j = i;j<n;j++)
        {
            int sum = 0;
            for(int k = i;k<=j;k++)
            {
                sum += arr[k];
            }
            maxSum = max(maxSum, sum);
        }
    } */

    //cumulative sum approach  O(n^2)
    /* int currSum[n];
    currSum[0] = arr[0];
    for(int i = 1;i<=n;i++)
    {
        currSum[i] = currSum[i-1] + arr[i];
    }
    int maxSum = INT_MIN;
    for(int i = 1;i<n;i++)
    {
        int sum = 0;
        for(int j = 0;j<i;j++)
        {
            sum = currSum[i] - currSum[j];
            maxSum = max(maxSum, sum);
        }
    }
    for(int i = 0;i<n;i++)
    {
        cout << currSum[i] << " ";
    }
    cout << maxSum << endl; */

    //Kadane's Algorithm  O(n)

    /*Store the maximum element among current element and maxSoFar + current element in maxSoFar. If maxSoFar is more than maximum sum then assign maxSoFar in maxSum*/
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
    cout << maxSum << endl;
    return 0;
}