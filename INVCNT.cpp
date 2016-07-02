#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll merge(ll a[],ll temp[],ll left,ll mid,ll right){
	ll i=left;
	ll j=mid;
	ll k=left;
	ll icount=0;
	while(i<=mid-1 && j<=right){
		if(a[i]<=a[j]){
			temp[k++]=a[i++];
		}
		else{
			temp[k++]=a[j++];
			icount=icount+(mid-i);
		}
	}
	while(i<=mid-1){
		temp[k++]=a[i++];
	}
	while(j<=right){
		temp[k++]=a[j++];
	}
	for(i=left;i<=right;i++)
	a[i]=temp[i];
	return icount;
}
ll mergesort(ll a[],ll temp[],ll s,ll e){
	ll m,icount=0;
	if(e>s){
		m=(s+e)/2;
		icount+=mergesort(a,temp,s,m);
		icount+=mergesort(a,temp,m+1,e);
		icount+=merge(a,temp,s,m+1,e);
	}
	return icount;
}
int main()
{

	ll t,n,i;
	cin>>t;
	ll a[200005],icount;
	while(t--){
		icount=0;
		cin>>n;
		ll temp[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		icount=mergesort(a,temp,0,n-1);
		cout<<icount<<endl;
	}
	return 0;
}
