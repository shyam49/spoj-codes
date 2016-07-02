#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
bool cmp(long long i,long long j)
{
	return (i>j);
}
int main()
{
	long long i,j,n;
	long long ans;
	long long c[100000],p[100000];
	while(1){
		cin>>n;
		if(n==0)
		break;
		for(i=0;i<n;i++){
			cin>>c[i];
		}
		for(i=0;i<n;i++){
			cin>>p[i];
		}
		sort(c,c+n,cmp);
		sort(p,p+n);
		ans=0;
		for(i=0;i<n;i++){
			ans+=c[i]*p[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}
