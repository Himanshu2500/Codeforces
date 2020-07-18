#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

const int M=1e9+7;

void solve()
{  
int n;
cin>>n;

int arr[n+1];

for(int i=1;i<=n;i++)
{
cin>>arr[i];
}

ll ans=0;
for(int i=30;i>=1;i--)
{
	ll max_sum=0;
	
	for(int j=0;j<n;j++)
	{
		if(arr[j]>i)
		{
			max_sum=0;
			continue;
		}
		max_sum+=arr[j];
		max_sum=max(max_sum,0ll);
		
		ans=max(max_sum-i,ans);
	}
}
cout<<ans<<"\n";
}

int main() 
{   
    ios::sync_with_stdio(0);
	cin.tie(0);
  
   //int test;
   //cin>>test;
   //while(test--)
     solve();
  return 0;
}
