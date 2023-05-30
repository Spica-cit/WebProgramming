#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dice(int n);

int main(void)
{
	int i;
	
	srand((unsigned int)time(NULL));
	
	for(i=0;i<10;i++){
		printf("Challenge %d  The dice eyes is ",i+1);
		printf("%d\n\n",dice(rand()));
	}
	
	return 0;
}

int dice(int n){
	return n % 6 + 1;
}