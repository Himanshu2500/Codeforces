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
int n;
cin>>n;
int a[n+1];
int b[n+1];
int v[n+1];
memset(b,-1,sizeof(b));
memset(v,-1,sizeof(v));

for(int i=1;i<=n;i++)
cin>>a[i];

for(int i=2;i<=n;i++)
{
	if(a[i]>a[i-1])
	b[i]=a[i-1];
	
	v[b[i]]=1;
}
v[a[n]]=1;
int j=0;
for(int i=1;i<=n;i++)
{
	while(v[j]==1)
	j++;
	
	if(b[i]==-1)
	{
		b[i]=j;
		
		v[j]=1;
	}
}

for(int i=1;i<=n;i++)
cout<<b[i]<<" ";

cout<<"\n";

}

int main() 
{   
    ios::sync_with_stdio(0);
	cin.tie(0);
  
   int test=1;
   //cin>>test;
   while(test--)
     solve();
  return 0;
}
