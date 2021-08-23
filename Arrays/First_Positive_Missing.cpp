/*
    Print the first positive missing number present in an array.
    For eg.:
        arr[] = {0, -9, 1, 3, -4, 5}
        first positive missing number is = 2
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
    bool check[10000];
    for(int i = 0;i<10000;i++)
    {
        check[i] = false;
    }
    for(int i = 0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            //storing whether a positive number is present in the array or not
            check[arr[i]] = true;
        }
    }
    int p;
    for(int i = 0;i<10000;i++)
    {
        if(check[i]==false)
        {
            //as soon as we find a positive number that is not present in the array, store it in a variable and then exit the loop.
            p = i;
            break;
        }
    }
    cout << p << endl;
    return 0;
}