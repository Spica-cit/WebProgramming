#include <stdio.h>

int main(void)
{
	int data[]={8};
	int i,over;
	double average;
	
	average = 0;
	over = 0;
	
	printf("Please score.\n");   /*“_”‚Ì“ü—Í‚ğ‘£‚·*/
	
	for(i=0;i<=7;i++){
		scanf("%d",&data[i]);
		average = average + data[i];
	}
	
	average = average / 8;
	
	for(i=0;i<=7;i++){
		if(data[i]>=average){
			over = over + 1;
		}
	}
	printf("Score's average is %lf\nPeople who get over average is %d\n",average,over);
	
	return 0;
}