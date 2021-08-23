#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    //INT_MIN means minimum possible integer in c++
    //INT_MAX means maximum possible integer in c++
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    for(int i = 0;i<n;i++)
    {
        /* if(arr[i]>maxNo)
        {
            maxNo = arr[i];
        }
        if(arr[i]<minNo)
        {
            minNo = arr[i];
        } */
    //alternative way
        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
    }
    cout<<"Maximum: "<<maxNo<<"\n";
    cout<<"Minimum: "<<minNo;
    return 0;
}