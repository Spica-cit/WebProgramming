#include <stdio.h>

int main(void)
{
	int i, goal, sum;
	
	printf("Please input the target amout\n");
	scanf("%d", &goal);
	i = 1;
	sum = 0;
	
	while(sum<goal){
		sum = sum + i;
		i = i + 1;
	}
	
	printf("You will succeed in ");
	printf("%d", i - 1);
	printf(" days\n");
	
	return 0;
}