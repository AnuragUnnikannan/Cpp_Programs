/*
    Print the sum of maximum circular subarray
    
    Sample input and output:
    Enter number of elements:
    8
    Enter 8 elements:
    10 -20 35 40 10 -10 100 -50
    175
*/
#include<iostream>
#include<algorithm>
using namespace std;
int kadane(int arr[], int n)
{
    //Kadane's Algorithm returns maximum subarray sum subarray length is n
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
    
    /*
    First we find the nonWrapSum using kadane's algorithm. Then invert the sign of each element in the array, and again use kadane's algorithm. The sum of totalSum and newly obtained result from kadane's algorithm is the wrapSum. The maximum of nonWrapSum and wrapSum is our required answer.
    */
    
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