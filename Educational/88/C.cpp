#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

const int M=1e9+7;

void solve()
{  
int h,c,t;
cin>>h>>c>>t;

if(t>=h)
{
	cout<<1<<'\n';
	return;
}


if(2LL*t<=(h+c))
{
	cout<<2<<"\n";
	return;
}

ll x=(t-c)/(2*t-(h+c));
//cout<<x<<" ";
long double val1=((h*x)+(x-1)*c)/(1.0*(2*x-1));
x++;
long double val2=((h*x)+(x-1)*c)/(1.0*(2*x-1));
//cout<<val1<<" "<<val2<<" ";
long double diff1=abs(val1-t);
long double diff2=abs(val2-t);

if(diff2<diff1)
cout<<(2*x-1)<<"\n";
else
cout<<(2*(x-1)-1)<<"\n";
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
