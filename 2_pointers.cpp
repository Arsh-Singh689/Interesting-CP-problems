#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define lld long long int
#define fo(i,a,n) for(lld i=a;i<n;i++)
#define fo1(i,a,n) for(lld i=n;i>=a;i--)
#define pb(k) push_back(k)
#define mp make_pair
#define pq priority_queue
#define F first
#define S second
#define mod 1000000007
using namespace std;

int main()
{
	IOS
	int t; cin>>t;
	while(t--)
	{
		lld n,k;
		cin>>n>>k;
		vector<lld> arr(n);
        fo(i,0,n) cin>>arr[i];

        lld head=-1,tail=0;
		lld cur_sum=0;
		lld ans=0;

		while(head+1<n)
		{
			head++;
			cur_sum+=arr[head];
			while(tail<=head && cur_sum>k){
				cur_sum=cur_sum-arr[tail];
				tail++;
			}
			ans+=(head-tail+1);
		}
		cout<<ans<<endl;
	}
}