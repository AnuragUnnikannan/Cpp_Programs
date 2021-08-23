/*
    Print largest word in a sentence
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of characters:" << endl;
    cin >> n;
    cin.ignore();
    char arr[n];
    cout << "Enter string:" << endl;
    
    //getline() is used to include spaces in the character array. Used for taking sentence as input.
    cin.getline(arr, n);

    //to clear the buffer
    cin.ignore();
    int maxLen = INT_MIN;
    
    //maxst is the starting index of largest word
    int st = 0, maxst = 0;
    int currLen = 0, i = 0;
    while(1)
    {
        if(arr[i] == ' ' || arr[i] == '\0')
        {
            if(currLen > maxLen)
            {
                maxLen = currLen;
                maxst = st;
            }
            st = i+1;
            currLen = 0;
        }
        else
        {
            currLen++;
        }
        if(arr[i] == '\0')
        {
            break;
        }
        i++;
    }
    cout << "Largest Word: " << endl;
    for(int i = 0;i < maxLen;i++)
    {
        cout << arr[i+maxst];
    }
    cout << endl;
    cout << "Length = " << maxLen << endl;
    return 0;
}