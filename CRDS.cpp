#include<bits/stdc++.h>
#define ll long long 
using namespace std;
#define M 1000007
int main()
{
	ll t,n,ans;
	cin>>t;
	while(t--){
		cin>>n;
		ans=0;
		ans=n*n*3 + n;
		ans=ans/2;
		cout<<ans%M<<endl;
	}
	return 0;
}
