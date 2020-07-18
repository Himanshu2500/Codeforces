#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

const int M=1e9+7;

void solve()
{  
ll n,x;
cin>>n>>x;

ll arr[2*n+1];
ll pref1[2*n+1];
ll pref2[2*n+1];

for(int i=0;i<n;i++)
{
	cin>>arr[i];
	arr[n+i]=arr[i];
}

//Prefix 1
pref1[0]=arr[0];
for(int i=1;i<2*n;i++)
pref1[i]=pref1[i-1]+(((arr[i]+1)*(arr[i]))/2);

//Prefix2
pref2[0]=arr[0];
for(int i=1;i<2*n;i++)
pref2[i]=pref2[i-1]+arr[i];

ll maxi=0;

for(int i=2*n-1;i>=n;i--)
{
	int low=1;
	int high =i;
	ll ans=i;
	while(low<=high)
	{
		int mid=(low+high)/2;
		
		if(pref2[i]-pref2[mid]<x)
		{
			ans=mid;
			high=mid-1;
		}
		else
		   low= mid+1;
	}
	
	ll temp=pref2[i]-pref2[ans-1]-x;
	ll sum=pref1[i]-pref1[ans-1];
	
	sum=sum-((temp*(temp+1))/2);
	
	maxi=max(maxi,sum);
}
cout<<maxi<<"\n";
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
