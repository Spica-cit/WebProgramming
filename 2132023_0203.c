#include <stdio.h>

int main(void)
{
	double top, under, high;
	printf ("ã’ê‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf ("%lf", &top);
	printf ("‰º’ê‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf ("%lf", &under);
	printf ("‚‚³‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf ("%lf", &high);
	printf ("%f\n", (top + under) * high / 2);
	return 0;
}