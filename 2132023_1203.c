#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int result(int n){
	
	if(n<60){
		printf("Slightly good luck\n");
	}else if(60<=n&&n<80){
		printf("Good luck\n");
	}else if(80<=n&&n<95){
		printf("Very good luck\n");
	}else{
		printf("Excellent luck\n");
	}
	return 0;
}

int main(void)
{
	int i;
	
	srand((unsigned int)time(NULL));
	
	for(i=0;i<10;i++){
		printf("Challenge %3d  ",i+1);
		result(rand()%100);
	}
	
	return 0;
}