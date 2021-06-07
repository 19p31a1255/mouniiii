#include<bits/stdc++.h>
using namespace std;
int dp[100005];
int fac(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	if (dp[n]!=-1)
	{
		return dp[n];
	}
	return n*fac(n-1);
}
int main() {
	int n,fac=1;
	cin>>n;
	for(int i=1;i*i<=n;i++)
	{
		dp[i]=-1;
	}
	cout<<"factorial is"<<fac;
	for(int i=1;i*i<=n;i++)
	{
		cout<<dp[i]<<" ";
	}
	return 0;
}
