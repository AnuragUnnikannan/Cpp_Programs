/*
    Changing case of a string using built in transform() method
*/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string in lower case:" << endl;
    getline(cin, str);
    cout << endl;

    //initial begin() and end() is for passing the string, and second begin() is for mentioning from where to start the conversion
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str << endl;

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << str << endl;
    return 0;
}