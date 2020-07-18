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
string a;
cin>>a;
int n=a.length();
int r=0,s=0,p=0;
for(int i=0;i<n;i++)
{
	if(a[i]=='S')
	s++;
	else
	if(a[i]=='R')
	r++;
	else
	p++;
}
string ans;

if(s>=r && s>=p)
ans="R";
else
if(r>=s && r>=p)
ans="P";
else
if(p>=r && p>=s)
ans="S";


for(int i=0;i<n;i++)
cout<<ans;

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
