#include <iostream>
using namespace std;
#include<algorithm>
int main() {
	
	// your code here
	int t,n;
	long r[1000],R[1000];
	cin >>t;
	int i,k,count;
	int max;
	while(t--){
		count=0;
		cin >>n;
		for(i=0;i<n;i++){
			cin >> r[i]>>R[i];
		}
		max=r[0];
		for(i=0;i<n;i++)
		if(max<=r[i])
		{
			max=r[i];
			k=i;
		}
		for(i=0;i<n;i++){
			if(i==k)
			continue;
			if(max<R[i])
			count++;
		}
		if(count>0)
		cout << -1 <<endl;
		else if(count==0)
		cout << k+1 <<endl;
	}
	return 0;
}
