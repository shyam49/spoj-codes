#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,n,count;
	cin>>t;
	string str;
	while(t--){
		cin>>str;
		count=0;
		n=str.size();
		for(i=0;i<n/2;i++){
			if(str[i]!=str[n-i-1])
			{
				count++;
				break;
			}
		}
		if(count==0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}
