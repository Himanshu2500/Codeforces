#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<(b);i++)
#define trav(a,x) for(auto & a :x)
#define all(x) begin(x),end(x)

typedef long long ll;
typedef vector<int> vi;

const int M=1e9+7;
ll arr[1000001];
void solve()
{  
ll n;
cin>>n;

for(int i=1;i<=n;i++)
cin>>arr[i];

sort(arr+1,arr+n+1);

for( int i=n;i>=1;i--)
{
	if(arr[i]<=i)
	{  cout<<i+1<<"\n";
		return;
	}
	
}

cout<<1<<"\n";
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
