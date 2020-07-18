#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int M=1e9+7;

void solve()
{
int a,b;
cin>>a>>b;
if(a==0 || b==0)
{
	cout<<"0\n";
	return;
}

if(a>b)
{
	int t=a;
	a=b;
	b=t;
}
ll ans;
if(b>2*a)
ans=a;
else
ans=(a+b)/3;



cout<<ans<<"\n";
}
int main() 
{

    ios::sync_with_stdio(0);
	cin.tie(0);
  
  int test=1;
   cin>>test;
   while(test--)
     solve();
  return 0;
}
