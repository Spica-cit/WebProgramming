#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	
	if(num>=90){
		printf("S\n");
	}else if(num>=80){
		printf("A\n");
	}else if(num>=70){
		printf("B\n");
	}else if(num>=60){
		printf("C\n");
	}else{
		printf("D\n");
	}
	return 0;
}