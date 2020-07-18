#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<(b);i++)
#define trav(a,x) for(auto & a :x)
#define all(x) begin(x),end(x)

typedef long long ll;
typedef vector<int> vi;

const int M=1e9+7;

void solve()
{  
ll n,k;

cin>>n>>k;

int i=2;

for(;i<=n;i++)
{
	if((n%i)==0)
	{
		break;
	}
}
ll ans=n+i+(k-1)*2;

cout<<ans<<"\n";

}

int main() 
{   
    ios::sync_with_stdio(0);
	cin.tie(0);
  
   int test;
   cin>>test;
   while(test--)
     solve();
  return 0;
}
