#include<bits/stdc++.h>
#define ll long long
#define M 10000007
using namespace std;
ll power(ll a,ll n){
	ll ans=1;
	while(n){
		if(n%2 == 1){
			ans=((ans)%M * a%M)%M;
		}
		a=(a%M * a%M)%M;
		n=n/2;
	}
	return ans;
}
int main()
{
	ll n,k;
	ll ans;
	while(1){
		cin>>n>>k;
		if(n==0 && k==0){
			return 0;
		}
		ans=power(n,k);
		ans%=M;
		ans=(ans+(power(n-1,k)*2)%M)%M;
		ans=(ans+(power(n,n)%M))%M;
		ans=(ans+(2*power(n-1,n-1))%M)%M;
		cout<<ans<<endl;
	}
	return 0;
}
