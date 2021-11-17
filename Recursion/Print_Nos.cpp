/*
	Print 1 to n and n to 1 using recursion
*/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void dec(int n)
{
    if(n == 1)
    {
		cout << "1" << " ";
        return;
    }
    else
    {
        cout << n << " ";
        dec(n-1);
    }
}

void inc(int n)
{
	if(n == 1)
	{
		cout << "1" << " ";
		return;
	}
	else
	{
		inc(n-1);
		cout << n << " ";
	}
}

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    cout << "1. Increasing Order" << endl;
    cout << "2. Decreasing Order" << endl;
    cout << "Enter choice: " << endl;
    int c;
    cin >> c;
    switch (c)
    {
        case 1:
            inc(n);
            break;
        case 2:
            dec(n);
            break;
        default:
            break;
    }
    return 0;
}