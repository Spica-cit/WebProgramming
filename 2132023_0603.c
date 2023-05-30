#include <stdio.h>

int main(void)
{
	int i, n, datum, win, lose;
	
	printf("n?\n");
	scanf("%d",&n);
	win = 0;
	lose = 0;
	
	printf("data?\n");
	
	for(i=1;i<=n;i++){
		scanf("%d",&datum);
		if(datum==1){
			win = win + 1;
		}else if(datum==0){
			lose = lose + 1;
		}
	}
	printf("You are ");
	printf("%d",win);
	printf(" wins and ");
	printf("%d",lose);
	printf(" looses.\n");
	
	return 0;
}