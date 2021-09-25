/*
    Print spiral matrix
    
    Sample input and output:
    
    Enter m and n:
    5 5
    
    1       2       3       4       5
    6       7       8       9       10
    11      12      13      14      15
    16      17      18      19      20
    21      22      23      24      25
    
    1 2 3 4 5 10 15 20 25 24 23 22 21 16 11 6 7 8 9 14 19 18 17 12 13
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
    cout << endl;
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    int top = 0, bottom = m-1, left = 0, right = n-1;
    int dir = 0;
    /*
        dir = 0 -> for moving left to right
        dir = 1 -> for moving top to bottom
        dir = 2 -> for moving right to left
        dir = 3 -> for moving bottom to top
    */
    while(top <= bottom && left <= right)
    {
        if(dir == 0)
        {
            for(int i = left;i<=right;i++)
            {
                cout << arr[top][i] << " ";
            }
            top++;
        }
        else if(dir == 1)
        {
            for(int i = top;i<=bottom;i++)
            {
                cout << arr[i][right] << " ";
            }
            right--;
        }
        else if(dir == 2)
        {
            for(int i = right;i>=left;i--)
            {
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }
        else if(dir == 3)
        {
            for(int i = bottom;i>=top;i--)
            {
                cout << arr[i][left] << " ";
            }
            left++;
        }
        //changing direction
        dir = (dir + 1)%4;
    }

    return 0;
}