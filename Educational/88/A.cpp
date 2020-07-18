#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

const int M=1e9+7;

void solve()
{  
int n,m,k;
cin>>n>>m>>k;

int each=n/k;

if(each>=m)
cout<<m<<"\n";
else
{
	int left=m-each;
//	cout<<left<<" ";
	int  j=ceil((left)/(1.0*(k-1)));
//	cout<<j<<" ";
	cout<<each-j<<"\n";
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
