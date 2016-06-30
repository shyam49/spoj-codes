#include <bits/stdc++.h>
using namespace std;
int fun(long n)
{
	long i,j;
	int count=0;
	for(i=2;i*i<=n;i++){
		if(n%i == 0){
			count++;
			break;
		}
	}
	if(count==0)
	return 1;
	return 0;
}
int main() {
	
	// your code here
	int t;
	cin >> t;
	long m,n,i;
	while(t--){
		cin >> m >> n;
		for(i=m;i<=n;i++){
			
			if(i==1)
			continue;
			if(fun(i))
			cout << i <<endl;
		}
		cout << endl;
	}
	return 0;
}
