#include <stdio.h>

int main(void)
{
	double top, under, high;
	printf ("������͂��Ă�������\n");
	scanf ("%lf", &top);
	printf ("�������͂��Ă�������\n");
	scanf ("%lf", &under);
	printf ("��������͂��Ă�������\n");
	scanf ("%lf", &high);
	printf ("%f\n", (top + under) * high / 2);
	return 0;
}