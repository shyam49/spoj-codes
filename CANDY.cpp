#include <stdio.h>

int main(void) {
	// your code here
	long n;
	long sum,i,a1,count;
	while(1){
		sum=0;
		count=0;
		scanf("%ld",&n);
		if(n==-1)
		break;
		long a[n];
		
		for(i=0;i<n;i++){
			scanf("%ld",&a[i]);
			sum=sum+a[i];
	
		}
		a1=sum/n;
		if(sum%n!=0)
		printf("-1\n");
		else{
			for(i=0;i<n;i++){
				while(a[i]<a1){
					a[i]++;
					count++;
				}
			}
			printf("%ld\n",count);
		}
	}

	return 0;
}
