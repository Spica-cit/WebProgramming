#include <stdio.h>

int main(void)
{
	int m[] ={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int days, month, day, today, i;
	
	days = 0;
	printf("Please today's month.\n");
	scanf("%d",&month);
	printf("Please today's day.\n");
	scanf("%d",&day);
	
	for(i=0;i<month-1;i++){
		days = days + m[i];
	}
	
	days = days + day;   /*“–“ú‚Ü‚Å‚Ì“ú”‚Ì‡Œv*/
	
	today = (days - 1)% 7;   /*“–“ú‚Ì—j“ú‚ÌŒvŽZ*/
	
	printf("This is today's date.(0=sunday,1=monday,2=tuesday,3=wednesday,4=thursday,5=friday,6=saturday.)\n");
	printf("%d\n",today);
	printf("Have a nice day!\n");
	
	return 0;
}