#include<bits/stdc++.h>
using namespace std;
int main()
{
	int sum=0,i,a[10],t,t1,t2;
	for(i=0;i<10;i++){
		cin>>a[i];
	}
	i=0;
	while(i<10 && sum+a[i]<=100){
		sum+=a[i];
		i++;
	}
	if(sum==100){
		cout<<100<<endl;
		return 0;
	}
	else if(i != 10){
		t=sum+a[i];
		t1=abs(sum-100);
		t2=abs(t-100);
		if(t1<t2){
			cout<<sum<<endl;
			return 0;
		}
		else if(t1 == t2){
			cout<<t<<endl;
			return 0;
		}
		else
		{
			cout<<t<<endl;
			return 0;
		}
	}
		cout<<sum<<endl;
	
	return 0;
}
