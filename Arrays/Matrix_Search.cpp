/*
    Searching an element in a sorted matrix
    
    Brute Force (Linear Search) -> O(n^2)
    Faster method -> O(n)
    
    Sample input and output:
    Enter m and n:
    4 4
    Enter 16 elements:
    1 2 3 4
    5 6 7 8
    9 10 11 12
    13 14 15 16
    Enter element to be searched:
    7
    Element found at position (1, 2)
    
    Answer is in format of (row, column)
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
    /* We cannot start neither from top left nor bottom right, because we do not know which direction to go for searching an element, since top left and bottom right element means smallest and largest element respectively.

    Therefore, we have to start either from top right or bottom left. Here we start from top right.*/
    int r = 0, c = m-1;
    int k;
    cout << "Enter element to be searched:" << endl;
    cin >> k;
    int flag = 0;
    int p1, p2;
    while(r < m && c >= 0)
    {
        if(k > arr[r][c])
        {
            //if key element is greater, then move 1 row down
            r++;
        }
        else if(k < arr[r][c])
        {
            //if key element is smaller, then move 1 column left
            c--;
        }
        else
        {
            p1 = r;
            p2 = c;
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        cout << "Element found at position (" << p1 << ", " << p2 << ")" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}