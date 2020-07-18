#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<(b);i++)
#define trav(a,x) for(auto & a :x)
#define all(x) begin(x),end(x)

typedef long long ll;
typedef vector<int> vi;

const int M=1e9+7;
int arr[100002];

int func(int a[],int n,int counter,int i)
{
	if(i>=n)
	 return counter;
	 
	int m=2;
	
	int sum=counter;
	
	while(i*m<=n)
	{
		if(a[i*m]>a[i])
		sum=max(sum,func(a,n,counter+1,i*m));
		m++;
	}
	return sum;
}

void solve()
{  

int n;
cin>>n;

rep(i,1,n+1)
cin>>arr[i];

int ans=1;

for(int i=1;i<=n;i++)
{
	ans=max(ans,func(arr,n,1,i));
}
cout<<ans<<"\n";
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
