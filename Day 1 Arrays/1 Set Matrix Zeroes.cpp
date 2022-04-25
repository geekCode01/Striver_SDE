#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>>&mat,int r,int c)
{
	int col0=1;
	for(int i=0;i<r;i++)
	{
		if(mat[i][0]==0) col0=1;
		for(int j=0;j<c;j++)
		{
			if(mat[i][j]==0)
				mat[i][0]=mat[0][j]=0;
		}
	}

	for(int i=r-1;i>=0;i--)
	{
		for(int j=c-1;j>=0;j--)
		{
			if(mat[i][0]==0 or mat[0][j]==0)
				mat[i][j]=0;
		}
		if(col0==0) mat[i][0]=0;
	}
}

int main()
{
	int r,c;
	cin>>r>>c;
	vector<vector<int>>mat(r,vector<int>(c));
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>mat[i][j];
		}
	}

	solve(mat,r,c);

	cout<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}