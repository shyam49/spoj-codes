#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll m[100000];
ll f[100000];
int main()
{
	ll t,n,i,ans;
	cin>>t;
	while(t--){
		cin>>n;
		ans=1;
		for(i=0;i<n;i++)
		cin>>m[i];
		for(i=0;i<n;i++)
		cin>>f[i];
		sort(m,m+n);
		sort(f,f+n);
		for(i=0;i<n;i++){
			ans+=m[i]*f[i];
		}
		cout<<ans-1<<endl;
	}
	return 0;
}
