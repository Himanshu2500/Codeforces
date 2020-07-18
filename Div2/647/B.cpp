#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


const int M=1e9+7;
int arr[1025];
int arr2[1025];
void solve()
{
int n;
cin>>n;

for(int i=0;i<n;i++)
cin>>arr[i];
sort(arr,arr+n);

for(int i=1;i<1024;i++)
{
	for(int j=0;j<n;j++)
	arr2[j]=arr[j]^i;
	
	sort(arr2,arr2+n);
	
	int j=0;
	
	for(;j<n;j++)
	{
		if(arr[j]!=arr2[j])
		break;
	}
	if(j==n)
	{
		cout<<i<<"\n";
		return;
	}
}
cout<<-1<<"\n";
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
