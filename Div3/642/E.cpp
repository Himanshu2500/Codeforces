#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<(b);i++)
#define trav(a,x) for(auto & a :x)
#define all(x) begin(x),end(x)

typedef long long ll;
typedef vector<int> vi;

const int M=1e9+7;

void solve()
{  
int n,k;
cin>>n>>k;

string s;
cin>>s;
vector <int> v;
for(int i=0;i<n;i++)
{   
	if(s[i]=='1')
	{
		if(s[i+k]=='1')
		{  int c=0;
			for(int j=1;j<k;j++)
			{
				if(s[i+j]=='1')
				c++;
			}
			v.push_back(c);
		}
		
	}
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
