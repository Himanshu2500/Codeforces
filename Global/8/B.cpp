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

ll n;
cin>>n;

string s="codeforces";
int len=s.length();

int a[11];

for(int i=0;i<10;i++)
a[i]=1;
int l=0;
while(true)
{   ll k=1;
	
	for(int i=0;i<10;i++)
	k*=a[i];
	
	if(k>=n)
	break;
	
	a[l]++;
	
	l=(l+1)%10;	
}

for(int i=0;i<10;i++)
{
	for(int j=0;j<a[i];j++)
	cout<<s[i];
}
}

int main() 
{   
    ios::sync_with_stdio(0);
	cin.tie(0);
  
   int test=1;
  // cin>>test;
   while(test--)
    {
	  solve();
	  cout<<"\n";
    }
  return 0;
}
