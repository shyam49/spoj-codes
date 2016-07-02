#include <stdio.h>

int main(void) {
	// your code here
	int n;
	scanf("%d",&n);
	int x,y,sum;
	while(n--){
		sum=0;
		scanf("%d %d",&x,&y);
		if(x==y || x-y == 2){
			if(x%2==0)
			sum=x+y;
			else
			sum=x+y-1;
			printf("%d\n",sum);
		}
		else
		printf("No Number\n");
	}
	return 0;
}
