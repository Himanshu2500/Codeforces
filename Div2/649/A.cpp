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


int arr[100001];
void solve()
{ 
int n,x;
cin>>n>>x;

ll sum=0;
int ans=-1;
for(int i=0;i<n;i++)
{
	cin>>arr[i];
	sum+=arr[i];
	if((sum)%x!=0)
	{
		ans=max(ans,i+1);
	}
}
sum=0;
for(int i=n-1;i>-1;i--)
{
	sum+=arr[i];
	if((sum)%x!=0)
	{
		ans=max(ans,n-i);
	}
}

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
