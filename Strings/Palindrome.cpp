/*
    Check whether a string is palindrome or not
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of characters:" << endl;
    cin >> n;
    char arr[n+1];
    cout << "Enter characters:" << endl;
    for(int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    int flag = 0;
    for(int i = 0;i < n;i++)
    {
        if(arr[i] == arr[n-i-1])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
    return 0;
}