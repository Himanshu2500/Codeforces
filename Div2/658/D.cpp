#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<(b);i++)
#define lop(n)  for(int i=0;i<n;i++)
#define revlop(n) for(int i=n-1;i>=0;i--)
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

// important functions
ll gcd(ll a, ll b){if(b==0) return a; return gcd(b,a%b);}
ll lcm(ll a, ll b){return (a*b)/gcd(a,b);}
ll power(ll x,ll y,ll p ){ll res=1;x%=p;while(y>0){if(y&1)res=(res*x)%p;y=y>>1;x=(x*x)%p;}return res;}
int setbits(ll x)  {  return __builtin_popcount(x);  }
ll factorial(ll n) {
	ll f = 1; 
    if (n == 0|| n == 1)  return 1; 
    for (ll i = 2; i <= n; i++)  f = f * i; 
    return f; 
}
bool isSubsetSum(vi set, int n, int sum) 
{ 
   
    bool subset[n + 1][sum + 1]; 
  
  
    for (int i = 0; i <= n; i++) 
        subset[i][0] = true; 
  
  
    for (int i = 1; i <= sum; i++) 
        subset[0][i] = false; 
  
   
    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= sum; j++) { 
            if (j < set[i - 1]) 
                subset[i][j] = subset[i - 1][j]; 
            if (j >= set[i - 1]) 
                subset[i][j] = subset[i - 1][j] 
                               || subset[i - 1][j - set[i - 1]]; 
        } 
    } 
    return subset[n][sum]; 
} 
void solve()
{ 
int n;
cin>>n;

vi p(2*n);

lop(2*n)  cin>>p[i];

vi a;
int ele = p[0];
int c=1;
for(int i=1;i<2*n;i++)
{
	if(p[i]>ele)
	{    a.pb(c);
		ele=p[i];
		c=1;
	}
	else
	 c++;
	 
	if(i== (2*n-1))
	a.pb(c);
}
 if (isSubsetSum(a, a.size(), n) == true) 
 cout<<"YES";
 else
 cout<<"NO";

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
