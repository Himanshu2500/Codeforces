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

int a[301][301];
void solve()
{ 

	int n,m;
	cin>>n>>m;
	bool ans=true;
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	{
	cin>>a[i][j];	
	 
	if( (i==0 || i==n-1) && ( j==0 || j==m-1) )
	{
	  if(a[i][j]>2)
	 ans=false;
	 else
	  a[i][j]=2;
    }
	else
	if( i==0 || i==n-1 || j==0 || j==m-1)
	{
	    if(a[i][j]>3)
	   ans=false;
      else
	   a[i][j]=3;
     }
	else
	   if(a[i][j]>4)
		ans=false;
	   else
		a[i][j]=4;
    }
    
    if(ans)
    	cout<<"YES"<<"\n";
	else
	{
	    cout<<"NO"<<"\n";
	    return;
    }
   
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<m;j++)
	cout<<a[i][j]<<" ";	
	cout<<"\n";
    }
    	
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
	
    }
  return 0;
}
