#include <stdio.h>

int main(void)
{
	int a[10], b[10];
	int i;
	
	for(i=0;i<=9;i++){
		scanf("%d",&a[i]);   /*配列a,bの各データの入力、コピー*/
		b[i] = a[i];
	}
	printf("a:");
	for(i=0;i<=9;i++){
		printf("%3d",a[i]);   /*配列aの出力*/
	}
	printf("\n");
	
	printf("b:");
	for(i=0;i<=9;i++){
		printf("%3d",b[i]);   /*配列bの出力*/
	}
	
	for(i=9;i>=0;i--){
		b[i] = a[9-i];   /*配列bにaの逆順でコピー*/
	}
	printf("\n");
	
	printf("a:");
	for(i=0;i<=9;i++){
		printf("%3d",a[i]);   /*逆順後のaの出力*/
	}
	printf("\n");
	
	printf("b:");
	for(i=0;i<=9;i++){
		printf("%3d",b[i]);/*逆順後のbの出力*/
	}
	printf("\n");
	
	return 0;
}