#include<bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<(n);i++)
#define trav(a,x) for(auto & a :x)
#define all(x) begin(x),end(x)
#define pb push_back
#define mpr make_pair
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
string s;
cin>>s;

int n=s.length();

int m;
cin>>m;
int a[m+1];
for(int i=0;i<m;i++)
cin>>a[i];

sort(s.begin(),s.end());

//cout<<s<<"\n";
map<int,int> mp;

for(int i=0;i<n;i++)
mp[s[i]-'a']++;

char res[m+2];
ll j=n-1;

while(false)
{     vi v;
     int zero=0;
	for(int i=0;i<m;i++)
	{
		if(a[i]==0)
		{
			zero++;
			v.pb(i);
		}
	}
	
	if(zero==0)
     break;
    
    if(zero>mp[s[j]-'a'])
    {
    	j=j-mp[s[j]-'a'];
    	continue;
	}
	
	ll p=j;
	j=j-mp[s[j]-'a'];
	
	for(int i=0;i<m;i++)
	{
		if(a[i]==0)
		{  
			res[i]=s[p--];
			a[i]=-1;
		}
		else
		{
			for(int k=0;k<v.size();k++)
			a[i]=a[i]-abs(i-v[k]);
		}
	} 
	       
}

for(int i=0;i<m;i++)
cout<<res[i];

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
