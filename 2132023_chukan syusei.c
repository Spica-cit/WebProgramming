/*����̃v���O�����̍H�v��
�K�����Ƃɓ��͓��e���킩��悤�ɏo�͕�����ꂽ
���������͂��Ȃ���Ȃ������ꍇ�ɃG���[���b�Z�[�W���o�͂ł���悤�ɂ���
���������R���������̏ꍇ�͍ēx���͂�v������
�������̏ꍇ�͌J��Ԃ���������悤�ɂ���
�������Ƀv���X���ď����܂ŏo��悤�ɂ����i���₷���Ǝv�������^��I���j
�e�ӏ��̃v���O�����ŉ����s���̂��𒍎߂œ��ꂽ
�e�������Ƃɉ������ڂ����o�͂����悤�ɂ���
���������s���A���̃v���O�������e�̏W�����ƂɈ�s�J���邱�ƂőS�̂����₷������
���Ҕs�҂ɉ����ă��b�Z�[�W�̏o�͂������@�ȏ�ł�*/
#include <stdio.h>

int main(void)
{
	int Player1, Player2, i, m, win1, win2, syouri1, syouri2;
	
	printf("How many mach do you do?(over 3)\n");
	/*���������邩�̓���*/
	scanf("%d",&m);
	while(m<3){
		/*3�񖢖��̎����������͂��ꂽ�ꍇ�ēx���͂�v��*/
		if(m<3){
			printf("Number of games is only over 3.One more please.\n");
		}
		scanf("%d",&m);
	}
	
	i = 1;
	win1 = 0;
	win2 = 0;
	
	while(i<=m){
		printf("Mach %d\n",i);/*�������ڂ��̏o��*/
		printf("Please Player1's hand.(gu=1,choki=2,pa=3) :");
		scanf("%d",&Player1);
		printf("Please Player2's hand.(gu=1,choki=2,pa=3) :");
		scanf("%d",&Player2);
		
		if(Player1==Player2){
			printf("Drow. One more.\n");/*�������Ȃ瓯��mach��������x*/
			i = i - 1;
		}else if(Player1==1&&Player2==2||Player1==2&&Player2==3||Player1==3&&Player2==1){
			printf("Player1 win!\n");
			win1 = win1 + 1;
		}else if(Player2==1&&Player1==2||Player2==2&&Player1==3||Player2==3&&Player1==1){
			printf("Player2 win!\n");
			win2 = win2 + 1;
		}else{
			/*�o����ɏ��������͈ȊO�̏ꍇ�̓G���[*/
			printf("Error.One more.Please 1 or 2 or 3.\n");
			i = i - 1;
		}
		/*�������ƌJ��Ԃ��l�̑���*/
		i = i + 1;
	}
	
	syouri1 = win1 * 100 / m;
	syouri2 = win2 * 100 / m;
	
	/*���ʂ̏o��(���ꂼ��̏������Ə���)*/
	printf("---Result---\n");
	printf("Player1 : win %d (%d percent)\n",win1,syouri1);
	printf("Player2 : win %d (%d percent)\n",win2,syouri2);
	
	/*�����̏��s�ɉ����ă��b�Z�[�W�̏o��*/
	if(syouri1>50){
		printf("Player1 : You are winner! Nice!\nPlayer2 : You are looser... Never give up!\n");
	}else if(syouri2>50){
		printf("Player1 : You are looser... Never give up!\nPlayer2 : You are winner! Nice!\n");
	}else{
		printf("This mach is drow. One more play!\n");
	}
	
	return 0;
}