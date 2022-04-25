#include<bits/stdc++.h>
using namespace std;

void sol(int *arr,int n)
{
    int l=0,m=0,h=n-1;
    while(m<=h)
    {
        switch(arr[m])
        {
            case 0:
                swap(arr[l++],arr[m++]);
                break;
            case 1:
                m++;
                break;
            case 2:
                swap(arr[m],arr[h--]);
        }
    }
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

    sol(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}