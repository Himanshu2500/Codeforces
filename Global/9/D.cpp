#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<(b);i++)
#define trav(a,x) for(auto & a :x)
#define all(x) begin(x),end(x)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vpii vector<pii>
#define F first
#define S second

typedef long long ll;
typedef vector<int> vi;

const int M=1e9+7;

int n;
int i, j, k;
int a[1003];
int ans[2003];
int cnt[1003];
int l, r;

void solve()
{       
        cin>>n;
		for (i = 0; i < n; i++)
			cin>>a[i];
		k = 0;
		for (i = 0; i <= n; i++)
			cnt[i] = 0;
		for (i = 0; i < n; i++)
			cnt[a[i]]++;
		l = 0;
		r = n - 1;
		while (a[l] == l)
			l++;
		while (a[r] == r + 1)
			r--;
		while (l <= r)
		{
			j = 0;
			while (cnt[j] > 0)
				j++;
			if (j == l)
			{
				ans[k] = j + 1;
				k++;
				cnt[a[j]]--;
				a[j] = j;
				cnt[j]++;
			}
			else
			{
				ans[k] = j;
				k++;
				cnt[a[j - 1]]--;
				a[j - 1] = j;
				cnt[j]++;
			}
			while (a[l] == l)
				l++;
			while (a[r] == r + 1)
				r--;
		}
		cout<<k<<"\n";
		
		if (k > 0)
		{
			for (i = 0; i < n ; i++)
				cout<<a[i]<<" ";
		}
	
}

int main() 
{   
    ios::sync_with_stdio(0);
	cin.tie(0);
  
   int test=1;
   cin>>test;
   while(test--)
    {
	  solve();
	  cout<<"\n";
    }
  return 0;
}
