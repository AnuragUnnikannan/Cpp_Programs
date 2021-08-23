#include <iostream>
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
    int p, flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            p = i + 1;
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "Element found at position " << p << endl;
    }
    else
    {
        cout << "Element not found";
    }
    return 0;
}