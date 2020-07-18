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

int n;
string s;

ll iman(int l, int r,char c)
{
	int mid=(l+r)/2;
	
	if(l==(r-1))
	  return (s[l]!=c);
	
	ll left  = iman(l,mid,(char)(c+1));
	ll right = iman(mid, r ,(char)(c+1));
	
	for(int i=l;i<mid;i++)
	 if(s[i]!=c)
	 right++;
	 
	for(int i=mid;i<r;i++)
	 if(s[i]!=c)
	 left++;
	 
	 return min(left,right); 
	
}
void solve()
{ 

cin>>n;
cin>>s;

cout<<iman(0,n,'a');

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
