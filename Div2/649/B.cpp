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
int arr[200001];
void solve()
{ 
int n;
cin>>n;

for(int i=1;i<=n;i++)
cin>>arr[i];

vi a;
a.pb(arr[1]);

for(int i=2;i<=n;i++)
{
	if(arr[i-1]>=arr[i])
	{
	i++;
	while(arr[i-1]>=arr[i] && i<=n)
	{
		i++;
	}
	if(i==n+1)
	a.pb(arr[n]);
	else
	a.pb(arr[i-1]);
    }
    else
	{
	i++;
	while(arr[i-1]<arr[i] && i<=n)
	{
		i++;
	}
	if(i==n+1)
	a.pb(arr[n]);
	else
	a.pb(arr[i-1]);
    }
	i--;
}
cout<<a.size()<<"\n";
for(int i=0;i<a.size();i++)
{
	cout<<a[i]<<" ";
}
cout<<"\n";
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
