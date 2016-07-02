#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll binexpo(ll a,ll b)
{
	ll ans=1;
	while(b){
		if(b%2==1){
			ans=(ans*a)%10;
		}
		a=(a*a)%10;
		b/=2;
	}
	return ans;
}
int main()
{
	ll t,a,b,ans;
	cin>>t;
	while(t--){
		cin>>a>>b;
		ans=binexpo(a,b);
		cout<<ans<<endl;
	}
	return 0;
}
