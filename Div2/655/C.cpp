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
int a[200001];
void solve()
{ 
int n;
cin>>n;

int c=0;
for(int i=1;i<=n;i++)
{
	cin>>a[i];
	
	if(a[i]==i)
	c++;
}
int x=c;
int l=1, r=n;

while(a[l]==l  && l<r)
{
l++;
c--;
}
while(a[r]==r && l<r)
{

r--;
c--;
}
if(l==r)
cout<<0;
else
if((n-x) == (r-l+1))
cout<<1;
else
cout<<2;

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
