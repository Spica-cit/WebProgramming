#include <stdio.h>

int sum(int n);
int squares(int n);

int main(void)
{
	int n, a;
	printf("Please number.\nFirst,how many.\nSecond,which do you use.(1:sum. 2:squares.)\n");
	scanf("%d%d",&n,&a);
	
	if(a==1){
		printf("%d\n",sum(n));
	}else if(a==2){
		printf("%d\n",squares(n));
	}
	return 0;
}

int sum(int n){
	return n * (n + 1) / 2;
}

int squares(int n){
	return n * (n + 1) * (2 *n + 1) / 6;
}