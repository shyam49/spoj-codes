#include <bits/stdc++.h>
using namespace std;
int dp[5000];
int k=0;
void tot()
{
	int i,j,count,temp;
	for(i=30;i<5000;i++){
		temp=i;
		count=0;
		for(j=2;j*j<=i;j++){
			if(temp%j == 0){
				while(temp%j == 0)
				temp=temp/j;
				count++;
			}
		}
			if(temp>1)
			count++;
		
		if(count>=3)
		dp[k++]=i;
	}
}
int main() {
	
	// your code here
	int t;
	int n;
	cin >> t;
	tot();
	while(t--){
		cin >> n;
		cout << dp[n-1]<<endl;
	}
	return 0;
}
