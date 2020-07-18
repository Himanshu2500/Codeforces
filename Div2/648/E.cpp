#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int M=1e9+7;


void solve()
{
int n;
cin>>n;
ll a[n+1];

for(int i=1;i<=n;i++)
cin>>a[i];

ll ans=0;

for(int i=1;i<=n;i++)
for(int j=i;j<=n;j++)
for(int k=j;k<=n;k++)
ans=max(ans,( a[i] | a[j] | a[k] ));

cout<<ans;
}
int main() 
{   
    ios::sync_with_stdio(0);
	cin.tie(0);
  
  int test=1;
  // cin>>test;
   while(test--)
     solve();
  return 0;
}
