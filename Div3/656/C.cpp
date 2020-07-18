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

vi a(n+1);
for(int i=0;i<n;i++)
cin>>a[i];

priority_queue <int> pq; 
int m=n-1;

while(m>0 && a[m-1]>=a[m])
{
	m--;
}

int res=0;

for(int i=0;i<=m;i++)
{
	pq.push(a[i]);
	
	if(a[i]<pq.top())
	{
		res=i;
		while(!pq.empty())
		{
			pq.pop();
		}
		pq.push(a[i]);
	}
}

cout<<res;
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
