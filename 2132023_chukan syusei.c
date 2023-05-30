/*今回のプログラムの工夫は
適所ごとに入力内容がわかるように出力文を入れた
準じた入力がなされなかった場合にエラーメッセージを出力できるようにした
試合数が３試合未満の場合は再度入力を要請した
あいこの場合は繰り返し勝負するようにした
勝利数にプラスして勝率まで出るようにした（見やすいと思い整数型を選択）
各箇所のプログラムで何を行うのかを注釈で入れた
各試合ごとに何試合目かを出力されるようにした
字下げを行い、一定のプログラム内容の集合ごとに一行開けることで全体を見やすくした
勝者敗者に応じてメッセージの出力をした　以上です*/
#include <stdio.h>

int main(void)
{
	int Player1, Player2, i, m, win1, win2, syouri1, syouri2;
	
	printf("How many mach do you do?(over 3)\n");
	/*何試合するかの入力*/
	scanf("%d",&m);
	while(m<3){
		/*3回未満の試合数が入力された場合再度入力を要請*/
		if(m<3){
			printf("Number of games is only over 3.One more please.\n");
		}
		scanf("%d",&m);
	}
	
	i = 1;
	win1 = 0;
	win2 = 0;
	
	while(i<=m){
		printf("Mach %d\n",i);/*何試合目かの出力*/
		printf("Please Player1's hand.(gu=1,choki=2,pa=3) :");
		scanf("%d",&Player1);
		printf("Please Player2's hand.(gu=1,choki=2,pa=3) :");
		scanf("%d",&Player2);
		
		if(Player1==Player2){
			printf("Drow. One more.\n");/*あいこなら同じmachをもう一度*/
			i = i - 1;
		}else if(Player1==1&&Player2==2||Player1==2&&Player2==3||Player1==3&&Player2==1){
			printf("Player1 win!\n");
			win1 = win1 + 1;
		}else if(Player2==1&&Player1==2||Player2==2&&Player1==3||Player2==3&&Player1==1){
			printf("Player2 win!\n");
			win2 = win2 + 1;
		}else{
			/*出す手に準じた入力以外の場合はエラー*/
			printf("Error.One more.Please 1 or 2 or 3.\n");
			i = i - 1;
		}
		/*試合数と繰り返し値の増加*/
		i = i + 1;
	}
	
	syouri1 = win1 * 100 / m;
	syouri2 = win2 * 100 / m;
	
	/*結果の出力(それぞれの勝利数と勝率)*/
	printf("---Result---\n");
	printf("Player1 : win %d (%d percent)\n",win1,syouri1);
	printf("Player2 : win %d (%d percent)\n",win2,syouri2);
	
	/*試合の勝敗に応じてメッセージの出力*/
	if(syouri1>50){
		printf("Player1 : You are winner! Nice!\nPlayer2 : You are looser... Never give up!\n");
	}else if(syouri2>50){
		printf("Player1 : You are looser... Never give up!\nPlayer2 : You are winner! Nice!\n");
	}else{
		printf("This mach is drow. One more play!\n");
	}
	
	return 0;
}