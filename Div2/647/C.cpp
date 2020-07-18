#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


const int M=1e9+7;

map<ll,ll> m;

void solve()
{

	ll n;
	cin>>n;
	
	ll ans=0;
	
	ll i=0;
	
	while(n>0)
	{
		if(n%2==1)
		{
			ans+=m[pow(2,i)];
		}
		i++;
		n=n/2;
	}
	cout<<ans<<"\n";
}
int main() 
{   
    ios::sync_with_stdio(0);
	cin.tie(0);
  
  int test;
   cin>>test;
   
   m[1]=1;
   
   for(ll i=2;i<1e18+10;i=i*2)
    m[i]=m[i/2]*2+1;
   while(test--)
     solve();
  return 0;
}
