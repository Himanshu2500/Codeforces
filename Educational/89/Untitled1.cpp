#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int M=1e9+7;

void solve()
{
ll ts;
cin>>ts;
ll n=ts;
int k=0;
while(n%2==0)
{
k++;
n=n/2;	
}
cout<<(ts/n-1)<<"\n";
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
