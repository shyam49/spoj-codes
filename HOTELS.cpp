#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,m;
	cin>>n>>m;
	long long a[n];
	long long i,ans,temp,start;
	for(i=0;i<n;i++)
	cin>>a[i];
	start=0;
	temp=a[0];
	if(a[0]<=m)
	ans=a[0];
	else
	ans=0;
	for(i=1;i<n;i++){
		while(temp>m){
			temp-=a[start];
			start++;
		}
			if(temp>ans && temp<=m)
				ans=temp;
		if(temp==m)
		{
			ans=m;
			break;
		}
		temp=temp+a[i];
		if(temp>ans && temp<=m)
		ans=temp;
	}
	while(temp>m){
		temp-=a[start];
		start++;
	}
	if(temp>=ans && temp<=m)
	ans=temp;
		cout<<ans<<endl;
	return 0;
}
