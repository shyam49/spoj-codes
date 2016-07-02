#include <stdio.h>

int main(void) {
	// your code here
	int l;
	float area;
	while(1){
		scanf("%d",&l);
		if(l==0)
		break;
		area=(l*l)/(2*3.1415926);
		printf("%.2f\n",area);
	}
	return 0;
}
