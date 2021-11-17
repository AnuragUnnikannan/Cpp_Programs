/*
    Print n raised to the power p using recursion
*/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int power(int n, int p)
{
    if(p==0)
    {
        return 1;
    }
    else
    {
        return n * power(n, p-1);
    }
}

int main()
{
    int n, p;
    cout << "Enter number and power to be raised:" << endl;
    cin >> n >> p;
    cout << power(n, p);
    return 0;
}