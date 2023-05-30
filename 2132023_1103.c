#include <stdio.h>

double average(double n);

int main(void)
{
	double sum,data[5];
	int i;
	sum = 0;
	for(i=0;i<=4;i++){
		printf("Please data.(%d)\n",i+1);
		scanf("%lf",&data[i]);
		sum = sum + data[i];
	}
	printf("This is average.\n");
	printf("%lf\n",average(sum));
	return 0;
}

double average(double n){
	return n / 5;
}