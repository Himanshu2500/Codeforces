#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int M=1e9+7;


void solve()
{
	int n;
	cin>>n;
	
	int a[n+1],b[n+1],ans[n+1];
	
	memset(ans,0,sizeof(ans));
	
	int x,y;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		
		a[x]=i;
	}
	
	for(int i=1;i<=n;i++)
	cout<<a[i]<<" ";
	cout<<"\n";
	
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		b[x]=i;
	}
	
	for(int i=1;i<=n;i++)
	cout<<b[i]<<" ";
	cout<<"\n";
	
	int dis;
	for(int i=1;i<=n;i++)
	{
		x=a[i];
		y=b[i];
		
		if(y>=x)
			dis=y-x;
		else
		  dis=n-x+y;
		  
		  ans[dis]++;
	}
	
	for(int i=1;i<=n;i++)
	cout<<ans[i]<<" ";
	cout<<"\n";
	
	int p=0;
	for(int i=0;i<=n;i++)
	{
		p=max(p,ans[i]);
	}
	cout<<p<<"\n";
}
int main() 
{   
    ios::sync_with_stdio(0);
	cin.tie(0);
  
  int test=1;
  // cin>>test;
   while(test--)
     solve();
  return 0;
}
