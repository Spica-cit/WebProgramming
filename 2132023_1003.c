#include <stdio.h>

int main(void)
{
	int data[3][10]={
		{1900, 1901, 2002, 2003, 2004, 2005, 2106, 2107, 2108, 2109},
		{1910, 1911, 1922, 2015, 2016, 2017, 2018, 2110, 2111, 2112},
		{1930, 1931, 2040, 2041, 2130, 2131, 2132, 2133, 2134, 2135}
	};
	int i, j, k, n, m;
	
	for(m=0;m<1;m++){
		printf("Please student's number.\n");
		scanf("%d",&n);
		k = 0;
		
		for(i=0;i<=2;i++){
			for(j=0;j<=9;j++){
				if(data[i][j]==n){
					printf("This student's department is ");
					if(i==0){
						printf("Engineering.\n");
					}else if(i==1){
						printf("Network.\n");
					}else{
						printf("Design.\n");
					}
					k = 1;
				}
			}
		}
		if(k==0){
			m = m - 1;
			printf("This number does not exist.One more please.\n");
		}
	}
	
	return 0;
	
}