#include <stdio.h>

int main(void)
{
	int i, j;
	
	for(i=1;i<=10;i++){
		printf("%d",i);
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}