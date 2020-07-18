#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int M=1e9+7;
int a[501];
int b[501];
int c[501];
void solve()
{
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
	cin>>a[i];
	c[i]=a[i];
    }
    
    int z=0,o=0;
    
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
		
		if(b[i]==1)
		o++;
		else
		z++;	
	}
	
	if(o>0 && z>0)
	cout<<"Yes\n";
	else
	{
	sort(c,c+n);
	int i=0;	
	for(;i<n;i++)
	if(a[i]!=c[i])
	break;
	
	if(i==n)
	cout<<"Yes\n";
	else	
	cout<<"No\n";
    }
}
int main() 
{   
    ios::sync_with_stdio(0);
	cin.tie(0);
  
  int test=1;
   cin>>test;
   while(test--)
     solve();
  return 0;
}
