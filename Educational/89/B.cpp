#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int M=1e9+7;
int ma[101][2];
void solve()
{
int n,x,m;
cin>>n>>x>>m;

for(int i=1;i<=m;i++)
{
	cin>>ma[i][0]>>ma[i][1];
}
int ans=0;
int i=1,l=x,r=x;

while(i<=m)
{

    if((ma[i][0]<=l && ma[i][1]>=l) || (ma[i][0]<=r && ma[i][1]>=r))
	   {
	   	
	    l=min(l,ma[i][0]);
		r=max(r,ma[i][1]);
		
     	}
	
	i++;
}

cout<<r-l+1<<"\n";

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
