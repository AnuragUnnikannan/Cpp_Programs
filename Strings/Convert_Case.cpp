/*
    Changing case of a string using ASCII value
*/
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string:" << endl;
    getline(cin, str);
    cout << endl;
    //for lower to upper
    for(int i = 0;i < str.length();i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            //by subtracting 32, the string gets converted to uppercase
            str[i] -= 32;
        }
    }
    cout << str << endl;

    //for upper to lower
    for(int i = 0;i < str.length();i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            //by adding 32, the string gets converted to lowercase
            str[i] += 32;
        }
    }
    cout << str << endl;
    return 0;
}