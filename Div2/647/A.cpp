#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


const int M=1e9+7;

void solve()
{
ll a,b;
	cin>>a>>b;
	
	ll count=0;
	
	ll low ,high;
	
	if(a==b)
	{
		cout<<0<<'\n';
		return;
	}
	
	if(a<b)
	{
		low=a;
		high=b;
	}
	else
	{
		low=b;
		high=a;
	}
	int ans=0;
	
	long double val=(high/(1.0*low));
	
	if((val)==floor(val))
	{
	ll  num=high/low;
	if((num&(num-1))==0 )
	{   int count=0;
	while(num!=1)
	{  num=num/2;
		count++;
	}
	if(count>=3)
	{
		ans=ans+count/3;
	}
	count=count%3;
	if(count>=2)
	{
		ans=ans+count/2;
	}	
	count=count%2;
	ans=ans+count;
	}
	else
	ans=-1;
    }
	else
	ans=-1;
	
	cout<<ans<<"\n";
}
int main() 
{   
    ios::sync_with_stdio(0);
	cin.tie(0);
  
  int test;
   cin>>test;
   while(test--)
     solve();
  return 0;
}
