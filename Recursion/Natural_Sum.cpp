/*
    Prints sum of natural numbers from 1 to n using recursion
*/
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int nSum(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n + nSum(n-1);
    }
}

int main()
{
    int n;
    cout << "Enter a number:" << endl;
    cin >> n;
    cout << nSum(n) << endl;
    return 0;
}