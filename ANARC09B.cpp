#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a,ll b)
{
	if(a==0)
	return b;
	else if(b==0)
	return a;
	return gcd(b%a,a);
}
int main()
{
	ll a,b,ans;
	while(1){
		cin>>a>>b;
		if(a==0 && b==0)
		break;
		ans = gcd(a,b);
		if(ans==1)
		ans = (a*b)/ans;
		else{
			ans=(a*b)/(ans*ans);
		}
		cout<<ans<<endl;
	}
	return 0;
}
