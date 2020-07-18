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
int a[100001];

void solve()
{ 
int n,x;
cin>>n>>x;

for(int i=0;i<n;i++)  cin>>a[i];

sort(a,a+n,greater<int>());

int j=0;
int team=0;
while(a[j]>=x && j<n)
j++;

team=j;
int count=1;
while(j<n)
{
	if(a[j]*count >= x)
	{  team++;
		count=1;
	}
	else
	count++;
	
	j++;
}
cout<<team;
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

