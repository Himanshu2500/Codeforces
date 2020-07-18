#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<(b);i++)
#define trav(a,x) for(auto & a :x)
#define all(x) begin(x),end(x)

typedef long long ll;
typedef vector<int> vi;

const int M=1e9+7;
int a[31],b[31];
void solve()
{  
int n,k;
cin>>n>>k;

for(int i=0;i<n;i++)
{
	cin>>a[i];
}
for(int i=0;i<n;i++)
{
	cin>>b[i];
}
sort(a,a+n);
sort(b,b+n,greater<int>());
int i=0;
while(true)
{
	if(k==0)
	break;
	
if(a[i]<b[i])
{
	int temp=a[i];
	a[i]=b[i];
	b[i]=temp;
	k--;
}	
if(a[i]==b[i])
break;

i++;
}

int sum=0;
for(int i=0;i<n;i++)
{
	sum+=a[i];
}
cout<<sum<<"\n";
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
