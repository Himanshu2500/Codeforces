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
int n,k;
cin>>n>>k;

vi v;
int x;
for(int i=0;i<n;i++)
{
	cin>>x;
	
	if((x%k)!=0)
	v.pb(k-(x%k));
}
int len=v.size();

if(len==0)
{
	cout<<"0";
	return;
}
sort(v.begin(),v.end());
ll lar=-1,freq=0;
for(int i=0;i<len;i++)
{
	if((v[i]==v[i-1]) && (i>0))
	{
		int c=1;
		
		while((v[i]==v[i-1]) && (i<len))
		{
			i++;
			c++;
		}
		if(freq<=c)
		{
			freq=c;
			lar=v[i-1];
		}
		i--;
	}
	else
	if(freq<2)
	{    freq=1;
		lar=v[i];
	}
//	cout<<lar<<" "<<freq<<"\n";
}
cout<<k*(freq-1)+lar+1;
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
