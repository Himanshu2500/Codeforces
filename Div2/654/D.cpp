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
int n,k,ans;
cin>>n>>k;
memset(a,0,sizeof(a));

if(k%n==0)
ans=0;
else
ans=2;

int div=k/n;
int rem=k%n;

int ele;

for(int i=0;i<n;i++)
{   if(div==0 && rem==0)
     break;
     else
     {
	 
    if(rem>0)
    {    ele=div+1;
    	int j=i;
    	
    	while(ele)
    	{
    		a[i][j]=1;
    		
    		j=(j+1)%n;
    		
    		ele--;
		}
		
		rem--;
	}
	else
	{
	 ele=div;
    	int j=i;
    	
    	while(ele)
    	{
    		a[i][j]=1;
    		
    		j=(j+1)%n;
    		
    		ele--;
		}
	
	}
	
   }

}
cout<<ans<<"\n";

for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
cout<<a[i][j];
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
