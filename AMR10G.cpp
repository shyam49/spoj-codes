#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t,n,k,i,ans,a;
	ll h[50000];
	cin>>t;
	while(t--){
		scanf("%lld %lld",&n,&k);
		ans=1000000001;
		for(i=0;i<n;i++){
			cin>>h[i];
		}
		if(k==1){
			printf("0\n");
		}	
		else{
			sort(h,h+n);
			for(i=0;i<=n-k;i++){
				a=h[i+k-1]-h[i];
				if(ans > a)
				ans=a;	
			}
			printf("%lld\n",ans);
		}
	}
	return 0;
}
