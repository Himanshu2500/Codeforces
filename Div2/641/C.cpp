#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<(b);i++)
#define trav(a,x) for(auto & a :x)
#define all(x) begin(x),end(x)

typedef long long ll;
typedef vector<int> vi;
//gcd(6, 20)
//lcm =(a*b)/gcd(a, b);
const int M=1e9+7;

class gfg 
{ 
 public : int gcd(int a, int b){ 
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  
 } 
  
   
// Function to return LCM of two numbers  
  int lcm(int a, int b)  
 {  
    return (a*b)/gcd(a, b);  
 }  
} ; 

int arr[200001];
int suf[200001];
void solve()
{  
int n;
cin>>n;
gfg g;
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
suf[0]=arr[0];
for(int i=1;i<n;i++)
{
	suf[i]= __gcd(arr[i],suf[i-1]);
}
int ans=suf[n-1];
for(int i=0;i<n-1;i++)
{
	ans=__gcd(ans,g.lcm(arr[i],suf[i+1]));
}
cout<<ans<<"\n";
}

int main() 
{   
    ios::sync_with_stdio(0);
	cin.tie(0);
     solve();
  return 0;
}
