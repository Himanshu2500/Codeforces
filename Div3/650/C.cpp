#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<(b);i++)
#define trav(a,x) for(auto & a :x)
#define all(x) begin(x),end(x)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vpii vector<pii>
#define F first
#define S second

typedef long long ll;
typedef vector<int> vi;


const int M=1e9+7;

/*
ll powermod(ll x, ll y, ll p)  
{  
    ll res = 1;    
    x = x % p; // Update x if it is more than or  
                // equal to p 
   
    if (x == 0) return 0; // In case x is divisible by p; 
  
    while (y > 0)  
    {  
        // If y is odd, multiply x with result  
        if (y & 1)  
            res = (res*x) % p;  
  
        // y must be even now  
        y = y>>1; // y = y/2  
        x = (x*x) % p;  
    }  
    return res;  
}  
*/


void solve()
{ 
int n,k;
cin>>n>>k;
string s;
cin>>s;

int ans=0;

int ones=0;
for(int i=0;i<n;i++)
{
  if(s[i]=='1')
  ones++;	
}


if( ones==0)
{
if(n==k)
ans=1;
else
{
ans=(n/(k+1));
if((n%(k+1))!=0)
ans++;
}
}
else
{
	for(int i=0;i<n;i++)
	{
		if(s[i]=='0')
		{  int c=0;
		   int ind=i;
			while(s[i]=='0')
			{
				c++;
				i++;
			}
			//cout<<c<<" "<<k <<" "<<ind<<"\n";
			if(c>k && ( ind==0 || (ind+c)==n))
			{
				ans+=c/(k+1);
				
			}
			else
			if(c>(2*k))
			{
			  c=c-k;
			  
			  ans+=c/(k+1);	
			}
			i--;
		}
	}
}

cout<<ans;
}

int main() 
{   
    ios::sync_with_stdio(0);
	cin.tie(0);
  
   int test;
   cin>>test;
   while(test--)
    {
	  solve();
	  cout<<"\n";
    }
  return 0;
}