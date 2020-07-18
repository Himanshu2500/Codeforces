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
typedef vector<ll> vi;


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
int arr[200001];

ll  kadane(vi a)
{    ll res=0;
     ll c=a[0];
	for(int i=1;i<a.size();i++)
	{  
	c=max(c+a[i],a[i]);
	res=max(res,c);
	}
	
	return res;
}

void solve()
{ 
int n;
cin>>n;
ll sum=0;

for(int i=0;i<n;i++)
{
	cin>>arr[i];
	
	if(i%2==0)
	sum+=arr[i];
}
if(n==1)
{
cout<<sum;
return;
}
vi v1,v2;

for(int i=0;i<n;i+=2)
v1.pb(arr[i-1]-arr[i]);

for(int i=0;i+1<n;i+=2)
v2.pb(arr[i+1]-arr[i]);

cout<<sum+max(kadane(v1),kadane(v2));
}

int main() 
{   
    ios::sync_with_stdio(0);
	cin.tie(0);
  
   int test=1;
   cin>>test;
   while(test--)
    {
	  solve();
	  cout<<"\n";
    }
  return 0;
}
