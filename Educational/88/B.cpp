#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

const int M=1e9+7;
char sqr[101][1001];

void solve()
{  
int n,m,x,y;
cin>>n>>m>>x>>y;

for(int i=0;i<n;i++)
for(int j=0;j<m;j++)
cin>>sqr[i][j];

bool price=false;
if(x>(y/2.0))
{
	price=true;
}

if(price)
{
	ll sum=0;
	for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {
    	if(sqr[i][j]=='.' && sqr[i][j+1]=='.' && (j+1)<m)
    	{ 
    	  sum+=y;	
    		j++;
		}
		else
		if(sqr[i][j]=='.' && sqr[i][j+1]=='*' && (j+1)<m)
		{
			sum+=x;
			j++;
		}
		else
		if(sqr[i][j]=='.' && (j+1)==m)
		{
			sum+=x;
			j++;
		}
		
	}
	cout<<sum<<"\n";
}
else
{
	ll sum=0;
	for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {if(sqr[i][j]=='.')
     sum++;
	}
	
	cout<<sum*x<<'\n';
}

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
