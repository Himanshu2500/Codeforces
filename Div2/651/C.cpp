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
string s1="Ashishgup";
string s2="FastestFinger";
	  
	  ll n;
	  cin>>n;
	  
	  if(n==1)
	  {
	  cout<<s2;
	  return;
      }
      
      if(n==2 || n%2==1)
      {
      	cout<<s1;
      	return;
	  }
	  
	  int k=0;
	  
	  while((n%2)==0)
	  {
	  	k++;
	  	n=n/2;
	  }
	  if(n==1)
	  {
	  	cout<<s2;
	  	return;
	  }
	  
	  if(k>1)
	  {
	  	cout<<s1;
	  	return;
	  }
	  
	  for(ll i=3;i*i<=n;i=i+2)
	    if(n%i==0)
	    {
	    	cout<<s1;
	    	return;
		}
		
		cout<<s2;
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
