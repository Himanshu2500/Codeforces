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

void solve()
{ 
     ll l, r, m;
    cin >> l >> r >> m;
    
    ll a, b, c;
    ll d = r - l;
    for ( a = l; a <= r; a++)
    {
        ll n = (m-d)/a;
        if(n*a < m-d) n++;
        if(n <= 0) n = 1;
        if(n*a <= m+d)
        {
            ll dd = n*a - m;
            if(dd > 0)
            {
                b = l;
                c = b + dd;
            }
            else
            {
                c = l;
                b = c - dd; 
            }
            break;            
        }
    }
    cout << a << ' ' << b << ' ' << c;    
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

