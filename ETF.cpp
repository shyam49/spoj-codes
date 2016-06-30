#include<bits/stdc++.h>
#define ll long long
#define N 1000005
using namespace std;
ll phi[N];
ll sp[N];
void fun()
{
	ll i,j;
	for(i=0;i<N;i++){
		sp[i]=i;
	}
	for(i=2;i*i<=N;i++){
		if(sp[i]==i){
			for(j=i*i;j<=N;j+=i)
			sp[j]=min(i,sp[j]);
		}
	}
	phi[1]=1;
	for(i=2;i<N;i++){
		if(sp[i] == sp[i/sp[i]]){
			phi[i] = sp[i] * phi[i/sp[i]];
		}
		else{
			phi[i] = phi[i/sp[i]] * sp[i] * (sp[i]-1);
			phi[i]/=sp[i]; 
		}
	}
}
int main()
{
	fun();
	ll t,n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<phi[n]<<endl;
	}
	return 0;
}
