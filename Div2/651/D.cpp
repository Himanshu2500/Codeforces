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
#define nl cout<<"\n";

typedef long long ll;
typedef vector<int> vi;


const int M=1e9+7;

/*
ll powermod(ll x, ll y, ll p)  
{  
    ll res = 1;    
    x = x % p; // Update x if it is more than or  
                // equal to p 
   
    if (x == 0) return 0; // In case x is divisible by p; 
  
    while (y > 0)  
    {  
        // If y is odd, multiply x with result  
        if (y & 1)  
            res = (res*x) % p;  
  
        // y must be even now  
        y = y>>1; // y = y/2  
        x = (x*x) % p;  
    }  
    return res;  
}  
*/
int partition(vi arr, int l, int r); 
  
// This function returns k'th smallest element in arr[l..r] using 
// QuickSort based method.  ASSUMPTION: ALL ELEMENTS IN ARR[] ARE DISTINCT 
int kthSmallest(vi arr, int l, int r, int k) 
{ 
    // If k is smaller than number of elements in array 
    if (k > 0 && k <= r - l + 1) { 
        // Partition the array around last element and get 
        // position of pivot element in sorted array 
        int pos = partition(arr, l, r); 
  
        // If position is same as k 
        if (pos - l == k - 1) 
            return arr[pos]; 
        if (pos - l > k - 1) // If position is more, recur for left subarray 
            return kthSmallest(arr, l, pos - 1, k); 
  
        // Else recur for right subarray 
        return kthSmallest(arr, pos + 1, r, k - pos + l - 1); 
    } 
  
    // If k is more than number of elements in array 
    return INT_MAX; 
} 
  
void swap(int* a, int* b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 
  
// Standard partition process of QuickSort().  It considers the last 
// element as pivot and moves all smaller element to left of it 
// and greater elements to right 
int partition(vi arr, int l, int r) 
{ 
    int x = arr[r], i = l; 
    for (int j = l; j <= r - 1; j++) { 
        if (arr[j] <= x) { 
            swap(&arr[i], &arr[j]); 
            i++; 
        } 
    } 
    swap(&arr[i], &arr[r]); 
    return i; 
} 


int main() 
{   
    ios::sync_with_stdio(0);
	cin.tie(0);
  
   int n,k;
   cin>>n>>k;
   
   vector<int> odd,even;
   int x;
   for(int i=1;i<=n;i++)
   {
   	cin>>x;
   	
   	if(i%2)
   	odd.pb(x);
   	else
   	even.pb(x);
   }
   k=n-k;
   int lar; 
   if(k%2)
   lar=1+(k+1)/2;
   else
   lar=1+k/2;
   
   sort(all(odd));
   sort(all(even));
   
   for(int i=0;i<odd.size();i++)
   cout<<odd[i]<<" ";
   nl
   
   for(int i=0;i<even.size();i++)
   cout<<even[i]<<" ";
   nl
   
   int o,e;
 if(k%2==0)
   {
    o=odd[odd.size()-lar];
    e=even[even.size()-lar];
    
    
   if(o>=e)
   cout<<e<<"\n";
   else
   cout<<o<<"\n";
   }
   else
    {
    	 o=odd[odd.size()-lar+1];
    	 e=even[even.size()-lar+1];
    	 
    	 if(e>=o)
    	 {
    	 	if(o>even[even.size()-lar])
    	 	cout<<even[even.size()-lar];
    	 	else
    	 	cout<<o<<"\n";
		 }
		 else
		 {
		 	if(e>odd[odd.size()-lar])
		 	cout<<odd[odd.size()-lar];
		 	else
		 	cout<<e<<"\n";
		 }
	}
  return 0;
}
