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

int arr[2001];
void solve()
{ 
int n;
cin>>n;

int even=0,odd=0;
for(int i=0;i<2*n;i++)
{
cin>>arr[i];

if(arr[i]%2)
odd++;
else
even++;
}

if(even%2 & odd%2)
{
	even--;
	odd--;
}
else
{
	if(even>2)
	even=even-2;
	else
	odd=odd-2;
}
 
 even=even/2;
 odd=odd/2;
 
 vector<vector<int>> v(n);
 
 for(int i=0;i<2*n;i++)
 v[arr[i]%2].pb(i+1);
 
 while(even)
 {
cout<<v[0][v[0].size()-1]<<" "<<v[0][v[0].size()-2]<<"\n";
v[0].pop_back();
v[0].pop_back();

even--;
 }
 
 while(odd)
{cout<<v[1][v[1].size()-1]<<" "<<v[1][v[1].size()-2]<<"\n";
v[1].pop_back();
v[1].pop_back();
	odd--;
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
