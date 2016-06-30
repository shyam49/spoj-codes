#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll fac[10005];
void fun(){
	ll i,j,count;
	for(i=1;i<10005;i++){
		count=0;
		for(j=1;j*j<=i;j++){
			if(i%j==0){
				count++;
			}
		}
		fac[i]=count;	
	}
}
int main()
{
	fun();
	ll n;
	cin>>n;
	ll i,ans[10005];
	ans[0]=0;
	for(i=1;i<10005;i++){
		ans[i]=ans[i-1]+fac[i];
	}
	cout<<ans[n]<<endl;
}
