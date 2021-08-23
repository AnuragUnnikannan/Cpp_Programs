/*
    Multiply 2 matrices
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n1, n2, n3;
    cout << "Enter n1, n2, n3:" << endl;
    cin >> n1 >> n2 >> n3;
    int A[n1][n2];
    cout << "Enter " << n1*n2 << " elements: " << endl;
    for(int i = 0;i<n1;i++)
    {
        for(int j = 0;j<n2;j++)
        {
            cin >> A[i][j];
        }
    }

    int B[n2][n3];
    cout << "Enter " << n2*n3 << " elements: " << endl;
    for(int i = 0;i<n2;i++)
    {
        for(int j = 0;j<n3;j++)
        {
            cin >> B[i][j];
        }
    }

    cout << "1st matrix" << endl;
    for(int i = 0;i<n1;i++)
    {
        for(int j = 0;j<n2;j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "2nd matrix" << endl;
    for(int i = 0;i<n2;i++)
    {
        for(int j = 0;j<n3;j++)
        {
            cout << B[i][j] << "\t";
        }
        cout << endl;
    }

    int C[n1][n3];
    for(int i = 0;i<n1;i++)
    {
        for(int j = 0;j<n3;j++)
        {
            C[i][j] = 0;
            for(int k = 0;k<n2;k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    cout << "Product" << endl;
    for(int i = 0;i<n1;i++)
    {
        for(int j = 0;j<n3;j++)
        {
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }
}