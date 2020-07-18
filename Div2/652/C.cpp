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
int a[200001];
int b[200001];
void solve()
{ 
int n,l;
cin>>n>>l;

for(int i=0;i<n;i++)
cin>>a[i];

for(int i=0;i<l;i++)
cin>>b[i];

sort(a,a+n);
sort(b,b+l);
ll sum=0;

int k=n-1;

for(int i=0;i<l;i++)
{   
	sum=sum+a[k];
	
	if(b[i]==1)
	
		sum+=a[k];
		
	 k--;
	 
	 b[i]--;

}
sort(b,b+l,greater<int>());
int j=0;
for(int i=0;i<l;i++)
{
	if(b[i]!=0)
	{
		sum+=a[j];
		
		j=j+b[i];
	}
	
}
cout<<sum;

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
