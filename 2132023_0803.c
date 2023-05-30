#include <stdio.h>

int main(void)
{
	int i, j, m;
	
	for(i=1;i<=9;i++){
		for(j=1;j<=9;j++){
			/*‚«‚ê‚¢‚Éo—Í‚µ‚½‚©‚Á‚½‚Ì‚Å‹ó”’‚ðo—Í‚µ‚Ü‚µ‚½*/
			while(j<i){
				printf("   ");
				j = j + 1;
			}
			m = i * j;
			printf("%3d",m);
		}
		printf("\n");
	}
	
	return 0;
}