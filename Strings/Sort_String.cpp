/*
    Sort a string in alphabetical order
*/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s1;
    cout << "Enter a string:" << endl;
    getline(cin, s1);

    //begin() returns the first character/iterator and end() returns the last character/iterator. end() usually returns '\0'
    sort(s1.begin(), s1.end());
    cout << s1 << endl;
    return 0;
}