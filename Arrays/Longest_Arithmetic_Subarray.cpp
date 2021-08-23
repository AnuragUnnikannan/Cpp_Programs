/*
    Print the maximum length of subarray having elements such that the difference between the elements is same.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements for array: " << endl;
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
    }
    int ans = 2;

    //previous difference
    int pd = arr[1] - arr[0];
    int j = 2;

    //current length of subarray
    int curr = 2;
    while(j < n)
    {
        if(pd == arr[j] - arr[j-1])
        {
            //incrementing length of subarray, if difference between adjacent elements is equal
            curr++;
        }
        else
        {
            //if not equal, then store new difference
            pd = arr[j] - arr[j-1];
            
            //reinitializing length to 2 (min. length of subarray possible)
            curr = 2;
        }

        //storing maximum length of subarray
        ans = max(ans, curr);
        j++;
    }
    cout << "Maximum Length of Subarray: " << ans;
    return 0;
}