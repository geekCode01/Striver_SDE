#include<bits/stdc++.h>
using namespace std;

int kadane(vector<int>&nums)
{
    int maxi=INT_MIN;
    int sum=0;
    for(auto it:nums)
    {
        sum += it;
        maxi=max(maxi,sum);
        if(sum<0) sum=0;
    }
    return maxi;
}

int main()
{
    vector<int>nums;
    int x;
    while(cin>>x)
    {
        nums.push_back(x);
    }

    cout<<kadane(nums);

}