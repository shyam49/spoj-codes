#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str[1000005];
	long long t,i,n,count;
	cin>>t;
	while(t--){
		count=0;
		cin>>str;
		n=strlen(str);
		for(i=0;i<n;i++){
			if(str[i]=='0')
			count++;
			else if(str[i]=='6')
			count++;
			else if(str[i]=='8')
			count+=2;
			else if(str[i]=='9')
			count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
