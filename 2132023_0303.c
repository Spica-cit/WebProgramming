#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d",&num);
	
	if(num%2==0){
		printf("even\n");
	}else{
		printf("odd\n");
	}
	return 0;
}