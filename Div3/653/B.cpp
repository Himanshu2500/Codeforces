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

int c6=0,c3=0;

while(n%6==0)
{
	n=n/6;
	c6++;
}

while(n%3==0)
{
	n=n/3;
	c3++;
}
//cout<<n<<" ";
if(n==1)
cout<<c6+2*c3;
else
cout<<-1;
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
