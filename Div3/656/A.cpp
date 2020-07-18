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
int x,y,z;
cin>>x>>y>>z;


int maxi =max(x,y);
maxi =max(maxi,z);

if(maxi==x && maxi ==y && maxi==z)
{
	cout<<"YES\n";
	cout<<x<<" "<<x<<" "<<x;
}
else
if(maxi==x && maxi == z && maxi>y)
{
	cout<<"YES\n";
	cout<<y<<" "<<y<<" "<<maxi;
}
else
if(maxi==x && maxi == y && maxi>z)
{
	cout<<"YES\n";
	cout<<z<<" "<<z<<" "<<maxi;
}
else
if(maxi==z && maxi == y && maxi>x)
{
	cout<<"YES\n";
	cout<<x<<" "<<x<<" "<<maxi;
}
else
cout<<"NO";
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
