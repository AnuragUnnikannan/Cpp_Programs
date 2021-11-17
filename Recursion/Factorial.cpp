/*
    Print factorial of a number using recursion
*/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int fact(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n-1);
    }
}

int main()
{
    int n;
    cout << "Enter a number:" << endl;
    cin >> n;
    cout << fact(n);
    return 0;
}