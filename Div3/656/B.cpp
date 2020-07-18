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
int a[51];

void solve()
{ 
int n;
cin>>n;

int s[51];

for(int i=0;i<51;i++)
s[i]=0;

for(int i=0;i<2*n;i++)
cin>>a[i];

for(int i=0;i<2*n;i++)
{
	if(s[a[i]]==0)
	{
		cout<<a[i]<<" ";
		
		s[a[i]]=1;
	}
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
