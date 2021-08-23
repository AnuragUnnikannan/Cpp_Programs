#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string str;
    cout << "Enter numeric string:" << endl;
    getline(cin, str);
    cout << endl;
    
    //converts string to int and sorts digits in descending order
    sort(str.begin(), str.end(), greater<int>());
    cout << str << endl;
    return 0;
}