#include<bits/stdc++.h>
using namespace std;

int buy_and_sell(int *arr,int n)
{
    int diff=INT_MIN;
    int maxi=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        maxi=max(maxi,arr[i]);
        diff=max(diff,maxi-arr[i]);
    }
    return diff;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<buy_and_sell(arr,n); 
}