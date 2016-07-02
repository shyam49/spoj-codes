#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	long n,c,s;
	while(t--){
		c=5;
		s=0;
		scanf("%ld",&n);
		while(c<=n){
			s=s+n/c;
			c=c*5;
		}
		printf("%ld\n",s);
	}
}
