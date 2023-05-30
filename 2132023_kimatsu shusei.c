/*
1.���o�̓��b�Z�[�W���e���łł�悤�ɂ���
2.�r���S�J�[�h�̏����l������قȂ�悤�ɂ���
3.���I�ԍ����d�����Ȃ��悤�ɂ���
4.�T�~�T�̃J�[�h�ɂ���
5.�֐��𑽂����p���Amain�֐����Ȍ��ɂ���
6.�O���[�o���ϐ��𗘗p���A�֐��ɂł���ӏ��𑝂₵��
7.�K���ɃR�����g�����A�������₷���R�[�h�ɂ���
8.���p�҂̏������ł�����i�ނ悤�ɂ���
9.�w�肳�ꂽ���̈ȊO�����͂����ƁA�G���[��\�����A�ēx���͂����߂�悤�ɂ���
10.---�̂悤�ȃ��C�������A���₷���悤�ɂ���
11.�֐����𕪂���₷������
12.�Ē�o�𗘗p���A�Q�l�����̓��e�������ꂽ
13.�A���Ńv���C�ł���悤�ɂ���
14.����Ńr���S�������o�͂���

�ȉ����z�ł�

���w���̍u�`���肪�Ƃ��������܂����B�ŏ��͉����킩��Ȃ���Ԃ���n�܂�A
���ł͂���Ȃ�ɑg�߂�悤�ɂȂ����Ǝv���Ă��܂��B���������̍ۂɂ́A�킩
�炸�Ɏ��Ԃ����Ă��܂��c�O�ȋC�����ŋA��܂����B�ƂɋA���Ă���u�O���[�o��
�ϐ��v��u�֐��v�ɂ��Ă������񒲂ׂč��グ�܂����B�����l�ɑΉ�������
�����������ł����A�����̌����_�̗͂ł͓�����ł����B���́u���[�`�v���o��
����悤�ɃR�[�h�����������悤���Ƃ��v�����̂ł����A���s���Ă܂������Ȃ�
�Ȃ�̂��|�������̂ł�߂܂����B���̕]�����B�����������ł��傢�ɖ���
�ł��B�]���y���݂ɂ��Ă��܂��B�~�x�݂ɂ͑����̎��Ԃ�����̂ŁA����ɒm����
�[�߂悤�Ǝv���܂��Bpython�ɂ����킵�悤�Ǝv���Ă��܂��B�u�`�͏I����Ă���
���܂����A�܂��������������ɂ͂�낵�����肢���܂��B���N�Ԃ��肪�Ƃ��������܂����B
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int data[5][5], num[75];
int i, sum;

int card(void), random(void), make(void), juge(void), hole(void);

int main(void)
{
	int x, y, z;

	srand((unsigned int)time(NULL));

	//�r���S�J�[�h�̍쐬

	make();

	//�r���S�J�[�h�̏o��

	printf("This is the Bingo card for this game.\n\n");
	card();

	//���I�ԍ��������_���ɐݒ�

	random();

	//�r���S�J�n

	for (x = 1; x < 2; x++) {
		printf("Let's start this geme.\n");
		for (y = 0; y < 1; y++) {
			printf("Are you ready?(Yes��1)\n");
			scanf("%d", &x);
			if (x == 1) {
				for (i = 0; i <= 74; i++) {
					for (z = 0; z < 1; z++) {
						if (x == 1) {
							printf("---------------\n");

							printf("The number is %d.\n", num[i]);

							hole();

							printf("---------------\n");

							card();

							juge();
							if (sum == 0) {
								break;
							}
						}else {
							printf("Error.One more please.\n");
							i = i - 1;
						}
					}
					if (sum == 0) {
						break;
					}
					printf("Next?(Yes��1)\n");
					scanf("%d", &x);
				}
			}else {
				printf("Error.One more please.\n");
				y = y - 1;
			}
		}
		printf("Bingo!Congratulations.Bingo was the %d time.\nLet's play again!\nDo you play more?(Yes��1:No��2)\n",i+1);
		scanf("%d", &x);
		if (x == 2) {
			printf("This game will finish.Thanks.\n");
		}
		else if (x != 1) {
			printf("Error.This game will finish.\n");
		}else if(x == 1){
			x = 0;
			make();
			printf("This card is next Bingo card.\n");
			card();
			random();
		}
	}
	return 0;
}

//-----�ȉ��֐�-----

//�r���S�J�[�h�쐬�֐�

int make(void) {
	int mi, mj, mk;

	for (mj = 0; mj <= 4; mj++) {
		for (mi = 0; mi <= 4; mi++) {
			data[mi][mj] = rand() % 75 + 1;
			if (data[mi][mj] > 15 * (mj + 1) || data[mi][mj] <= 15 * mj) {
				mi = mi - 1;
			}
			for (mk = 0; mk < mi; mk++) {
				if (data[mi][mj] == data[mk][mj]) {
					mi = mi - 1;
				}
			}
		}
	}
	data[2][2] = 0;
	return 0;
}

//�r���S�J�[�h�o�͊֐�

int card(void) {
	int ci, cj;

	for (ci = 0; ci <= 4; ci++) {
		for (cj = 0; cj <= 4; cj++) {
			printf("%3d", data[ci][cj]);
		}
		printf("\n\n");
	}
	return 0;
}

//1�`�V�T�܂ł������_���ɐݒ�

int random(void) {
	int ri, target, temp;

	for (ri = 0; ri <= 74; ri++) {
		num[ri] = ri + 1;
	}
	for (ri = 74; ri > 0; ri--) {
		target = rand() % ri;
		temp = num[target];
		num[target] = num[ri];
		num[ri] = temp;
	}
	return 0;
}

//����������֐�

int hole(void) {
	int fj, fk;
	for (fj = 0; fj <= 4; fj++) {
		for (fk = 0; fk <= 4; fk++) {
			if (data[fj][fk] == num[i]) {
				data[fj][fk] = 0;
			}
		}
	}
	return 0;
}

//�r���S�ɂȂ������m�F����֐�

int juge(void) {
	int jj, jk, ji;
	for (ji = 0; ji <= 1; ji++) {
		for (jj = 0; jj <= 4; jj++) {
			sum = 0;
			for (jk = 0; jk <= 4; jk++) {
				sum = sum + data[jj][jk];
			}
			if (sum == 0) {
				break;
			}
		}
		if (sum == 0) {
			break;
		}

		for (jj = 0; jj <= 4; jj++) {
			sum = 0;
			for (jk = 0; jk <= 4; jk++) {
				sum = sum + data[jk][jj];
			}
			if (sum == 0) {
				break;
			}
		}
		if (sum == 0) {
			break;
		}
		sum = 0;
		for (jj = 0; jj <= 4; jj++) {
			for (jk = 0; jk <= 4; jk++) {
				if (jj + jk == 4) {
					sum = sum + data[jj][jk];
				}
			}
		}
		if (sum == 0) {
			break;
		}

		sum = 0;
		for (jj = 0; jj <= 4; jj++) {
			for (jk = 0; jk <= 4; jk++) {
				if (jj == jk) {
					sum = sum + data[jj][jk];
				}
			}
		}
		if (sum == 0) {
			break;
		}
		sum = 1;
	}
	return 0;
}