#include <stdio.h>

int main(void) {
	// your code here
	int n,i,sum;
	while(1){
		sum=0;
		scanf("%d",&n);
		if(n==0)
		break;
		sum=n*(n+1)*(2*n + 1);
		sum/=6;
		printf("%d\n",sum);
	}
	return 0;
}
