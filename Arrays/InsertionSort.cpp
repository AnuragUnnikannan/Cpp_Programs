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
    for(int i = 1;i<n;i++)
    {
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && temp<=arr[j])
        {
            //swapping previous element with next element
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    for(int i = 0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}