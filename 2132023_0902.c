#include <stdio.h>

int main(void)
{
	int a[10], b[10];
	int i;
	
	for(i=0;i<=9;i++){
		scanf("%d",&a[i]);   /*�z��a,b�̊e�f�[�^�̓��́A�R�s�[*/
		b[i] = a[i];
	}
	printf("a:");
	for(i=0;i<=9;i++){
		printf("%3d",a[i]);   /*�z��a�̏o��*/
	}
	printf("\n");
	
	printf("b:");
	for(i=0;i<=9;i++){
		printf("%3d",b[i]);   /*�z��b�̏o��*/
	}
	
	for(i=9;i>=0;i--){
		b[i] = a[9-i];   /*�z��b��a�̋t���ŃR�s�[*/
	}
	printf("\n");
	
	printf("a:");
	for(i=0;i<=9;i++){
		printf("%3d",a[i]);   /*�t�����a�̏o��*/
	}
	printf("\n");
	
	printf("b:");
	for(i=0;i<=9;i++){
		printf("%3d",b[i]);/*�t�����b�̏o��*/
	}
	printf("\n");
	
	return 0;
}