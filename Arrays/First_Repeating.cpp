/*
    Print the position of first occurrence of the element that is repeated. (Answer is in 1 based indexing)
    
    Sample Input & Output
    Enter number of elements:
    5
    Enter 5 elements:
    7 2 17 2 4
    2
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
    const int N = 100000;
    int idx[N];
    int min_index = INT_MAX;
    for(int i = 0;i<N;i++)
    {
        idx[i] = -1;
    }
    for(int i = 0;i<n;i++)
    {
        //for repeating element
        if(idx[arr[i]] != -1)
        {
            min_index = min(min_index, idx[arr[i]]);
        }
        else
        {
            //storing index of each element
            idx[arr[i]] = i;
        }
    }
    //if no repetition
    if(min_index == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << min_index + 1 << endl;
    }
    return 0;
}