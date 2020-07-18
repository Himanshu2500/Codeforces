#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int M=1e9+7;
int arr[51][51];
void solve()
{
	int n,m;
	cin>>n>>m;
	
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	cin>>arr[i][j];
	
   int count=0;
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	{
	int col=0,row=0;
	
	for(int k=0;k<n;k++)
	if(arr[k][j]==0)
	col++;
	
	for(int l=0;l<m;l++)
	if(arr[i][l]==0)
	row++;
	
	if(col==n && row==m)
	{  count++;
	  arr[i][j]=1;
    }	   
    }
    
    if(count%2)
	cout<<"Ashish\n";
	else
	cout<<"Vivek\n";
}
int main() 
{

    ios::sync_with_stdio(0);
	cin.tie(0);
  
  int test=1;
   cin>>test;
   while(test--)
     solve();
  return 0;
}
