/*
����̍H�v�����ӏ�
�E�T�~�T�}�X�̃r���S�ɂ���
�E�e�ӏ��ɃR�����g�����v���O�������킩��₷������
�E�ϐ������킩��₷������
�E���������ӎ�����
�E�����ł��_�����オ��悤�ɂ���
�E�o�͌��ʂ��킩��₷���\�������悤�ɂ���
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int chusen(int n);
int number(int m);

int main(void){
	
	int data[5][5], num[75];
	int i, a, b, c, target, temp, sum, next;
	
	srand((unsigned int)time(NULL));
	
	//�r���S�J�[�h�̍쐬
	
	for(a=0;a<=4;a++){
		for(b=0;b<=4;b++){
			data[b][a] = rand() % 75 + 1;
			if(data[b][a]<=15*a||data[b][a]>15*(a+1)){
				b = b - 1;
			}
			for(c=0;c<b;c++){
				if(data[b][a]==data[c][a]){
					b = b - 1;
				}
			}
		}
	}
	
	data[2][2] = 0;
	
	//�r���S�J�[�h�̏o��
	
	printf("���ꂪ����̃r���S�J�[�h�ł�\n");
	for(a=0;a<=4;a++){
		for(b=0;b<=4;b++){
			printf("%3d",data[a][b]);
		}
		printf("\n\n");
	}
	
	//���I�ԍ��������_���ȏ��Ԃɐݒ�
	
	for(a=0;a<=74;a++){
		num[a] = a + 1;
	}
	for(a=74;a>0;a--){
		target = rand() % a;
		temp = num[target];
		num[target] = num[a];
		num[a] = temp;
	}
	
	//�r���S�J�n
	printf("����ł͎n�߂܂�\n\n");
	for(a=0;a<=74;a++){
		printf("%d�Ԗڂ̔ԍ���%3d�ł�\n\n",a+1,num[a]);
		for(b=0;b<=4;b++){
			for(c=0;c<=4;c++){
				if(data[b][c]==num[a]){
					data[b][c] = 0;
				}
			}
		}
		
		printf("---------------\n");
		
		for(b=0;b<=4;b++){
			for(c=0;c<=4;c++){
				printf("%3d",data[b][c]);
			}
			printf("\n\n");
		}
		for(b=0;b<=4;b++){
			sum = 0;
			for(c=0;c<=4;c++){
				sum = sum + data[b][c];
			}
			if(sum==0){
				break;
			}
		}
		if(sum==0){
			break;
		}
		
		for(b=0;b<=4;b++){
			sum = 0;
			for(c=0;c<=4;c++){
				sum = sum + data[c][b];
			}
			if(sum==0){
				break;
			}
		}
		if(sum==0){
			break;
		}
		sum = 0;
		for(b=0;b<=4;b++){
			for(c=0;c<=4;c++){
				if(b+c==4){
					sum = sum + data[b][c];
				}
				if(sum==0){
					break;
				}
			}
		}
		if(sum==0){
			break;
		}
		
		sum = 0;
		for(b=0;b<=4;b++){
			for(c=0;c<=4;c++){
				if(b==c){
					sum = sum + data[b][c];
				}
				if(sum==0){
					break;
				}
			}
		}
		if(sum==0){
			break;
		}
		printf("���ɐi�ޏꍇ��1�������Ă�������\n");
		scanf("%d",&next);
	}
	printf("Bingo!!�ł��I\n���߂łƂ��������܂��I\n�܂��V��ł�������!\n");
	
	return 0;
}

//�ȉ��֐�
