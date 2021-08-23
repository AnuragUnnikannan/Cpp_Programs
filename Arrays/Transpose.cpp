/*
    Print transpose of matrix
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter m and n:" << endl;
    cin >> m >> n;
    int arr[m][n];
    cout << "Enter " << m*n << " elements: " << endl;
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Original Matrix:" << endl;
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Transpose:" << endl;
    for(int i =0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cout << arr[j][i] << "\t";
        }
        cout << endl;
    }
    return 0;
}