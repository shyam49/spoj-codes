#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	ll k;
	cin>>t;
	while(t--){
		cin>>k;
		if(k&1){
			cout<<(5*k - 3)/2<<"92"<<endl;
		}
		else
		cout<<(5*k - 2)/2<<"42"<<endl;
	}
	return 0;
}
