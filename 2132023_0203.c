#include <stdio.h>

int main(void)
{
	double top, under, high;
	printf ("上底を入力してください\n");
	scanf ("%lf", &top);
	printf ("下底を入力してください\n");
	scanf ("%lf", &under);
	printf ("高さを入力してください\n");
	scanf ("%lf", &high);
	printf ("%f\n", (top + under) * high / 2);
	return 0;
}