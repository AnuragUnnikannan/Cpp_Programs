/*
    Printing the character having highest frequency
*/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    cout << endl;
    int freq[26];
    for(int i = 0;i < 26;i++)
    {
        freq[i] = 0;
    }
    for(int i = 0;i < str.length();i++)
    {
        /*
            str = "apple"
            str[0] - a = 0
            therefore, freq[0]++ => 1
        */
        freq[str[i] - 'a']++;
    }
    int maxFreq = INT_MIN;
    char ans = 'a';
    for(int i = 0;i < 26;i++)
    {
        if(freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            ans = i + 'a';
        }
    }
    cout << "Highest Frequency Character: " << ans << endl;
    cout << "Frequency: " << maxFreq << endl;
    return 0;
}