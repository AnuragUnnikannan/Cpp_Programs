#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements for array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter element to be searched: " << endl;
    cin >> key;
    int low = 0, high = n;
    int flag = 0, p = 0;
    while(low <= high)
    {
        int mid = (low + high)/2;
        if(key < arr[mid])
        {
            high = mid - 1;
        }
        else if(key > arr[mid])
        {
            low = mid + 1;
        }
        else if(key == arr[mid])
        {
            flag = 1;
            p = mid+1;
            break;
        }
    }
    if(flag==1)
    {
        cout << "Element found at position " << p <<endl;
    }
    else
    {
        cout << "Element not found" <<endl;
    }
    return 0;
}