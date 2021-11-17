#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int fibo(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else
    {
        return fibo(n-1) + fibo(n-2);
    }
}

int main()
{
    int n;
    cout << "Enter number of terms:" << endl;
    cin >> n;
    cout << fibo(n) << endl;
    return 0;
}