/*
    Print the start index and end index of the array that is equal to the sum entered by user.
*/

#include<iostream>
using namespace std;
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
    int sum;
    cout << "Enter sum:" << endl;
    cin >> sum;
    int  i = 0, j = 0, st = -1, en = -1, currSum = 0;
    //st -> for storing final start index   en -> for storing final end index
    while(j<n && currSum + arr[j] <= sum)
    {
        currSum += arr[j];
        j++;
    }
    if(currSum == sum)
    {
        cout << i+1 << " " << j << endl;
        return 0;
    }
    while(j < n)
    {
        currSum += arr[j];
        while(currSum > sum)
        {
            currSum -= arr[i];
            i++;
        }
        if(currSum == sum)
        {
            st = i+1;
            en = j+1;
            break;
        }
        j++;
    }
    cout << st << " " << en;
    return 0;
}