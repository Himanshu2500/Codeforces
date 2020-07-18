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

void solve()
{ 
int n;
cin>>n;

if(n%2==0)
{
	cout<<n/2<<" "<<n/2;
	return;
}

int b=1;
for( int i=2;i*i<=n;i++)
{
	if(n%i==0)
	{
	  b=i;
	  break;
   }
}
if(b==1)
cout<<1<<" "<<n-1;
else
{
b=n/b;
cout<<b<<" "<<n-b;
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
	  cout<<"\n";
    }
  return 0;
}
