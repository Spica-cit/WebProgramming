/*今回のプログラムの工夫は
適所ごとに入力内容がわかるように出力文を入れた
準じた入力がなされなかった場合にエラーメッセージを出力できるようにした
エラーの際には反復を脱出できるようにbreakを用いた
あいこの場合は繰り返し勝負するようにした
勝利数にプラスして勝率まで出るようにした（見やすいと思い整数型を選択）
各箇所のプログラムで何を行うのかを注釈で入れた
各試合ごとに何試合目かを出力されるようにした
字下げを行い、一定のプログラム内容の集合ごとに一行開けることで全体を見やすくした　以上です*/
#include <stdio.h>

int main(void)
{
	int Player1, Player2, i, m, win1, win2, syouri1, syouri2;
	
	printf("How many mach do you do?(not 0,1,2)\n");
	/*何試合するかの入力*/
	scanf("%d",&m);
	
	i = 1;
	win1 = 0;
	win2 = 0;
	
	while(i<=m){
		if(m<3){
			/*試合数が3未満の場合にエラー*/
			printf("Error.\n");
			break;
		}
		
		printf("Mach %d\n",i);/*何試合目かの出力*/
		printf("Please Player1's hand.(gu=1,choki=2,pa=3) :");
		scanf("%d",&Player1);
		printf("Please Player2's hand.(gu=1,choki=2,pa=3) :");
		scanf("%d",&Player2);
		
		if(Player1==Player2){
			printf("Drow. One more.\n");/*あいこなら同じmachをもう一度*/
			i = i - 1;
		}else if(Player1==1&&Player2==2||Player1==2&&Player1==3||Player1==3&&Player2==1){
			printf("Player1 win!\n");
			win1 = win1 + 1;
		}else if(Player2==1&&Player1==2||Player2==2&&Player1==3||Player2==3&&Player1==1){
			printf("Player2 win!\n");
			win2 = win2 + 1;
		}else{
			/*出す手に準じた入力以外の場合はエラー*/
			printf("Error.\n");
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
	
	return 0;
}