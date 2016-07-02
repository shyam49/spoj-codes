#include <stdio.h>

int main(void) {
	// your code here
	long long t;
	long long n,i,sum;
	scanf("%lld",&t);
	while(t--){
		sum=0;
		scanf("%lld",&n);
		long long a[n];
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			sum=(sum+a[i])%n;
		}
		if(sum==0)
		printf("YES\n");
		else
		printf("NO\n");
		printf("\n");
		
	}
	return 0;
}
