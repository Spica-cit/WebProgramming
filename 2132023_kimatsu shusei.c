/*
1.入出力メッセージを各所ででるようにした
2.ビンゴカードの初期値が毎回異なるようにした
3.抽選番号が重複しないようにした
4.５×５のカードにした
5.関数を多く利用し、main関数を簡潔にした
6.グローバル変数を利用し、関数にできる箇所を増やした
7.適所にコメントを入れ、見直しやすいコードにした
8.利用者の準備ができ次第進むようにした
9.指定されたもの以外が入力されると、エラーを表示し、再度入力を求めるようにした
10.---のようなラインを入れ、見やすいようにした
11.関数名を分かりやすくした
12.再提出を利用し、参考資料の内容も取り入れた
13.連続でプレイできるようにした
14.何回でビンゴしたか出力した

以下感想です

今学期の講義ありがとうございました。最初は何もわからない状態から始まり、
今ではそれなりに組めるようになったと思っています。期末試験の際には、わか
らずに時間が来てしまい残念な気持ちで帰りました。家に帰ってから「グローバル
変数」や「関数」についてたくさん調べて作り上げました。複数人に対応したり
したかったですが、自分の現時点の力では難しそうでした。実は「リーチ」を出力
するようにコードを書き換えようかとも思ったのですが、実行してまた動かなく
なるのが怖かったのでやめました。問題の評価基準を達成しただけでも大いに満足
です。評価楽しみにしています。冬休みには多くの時間があるので、さらに知識を
深めようと思います。pythonにも挑戦しようと思っています。講義は終わってしま
いますが、また何かあった時にはよろしくお願いします。半年間ありがとうございました。
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

	//ビンゴカードの作成

	make();

	//ビンゴカードの出力

	printf("This is the Bingo card for this game.\n\n");
	card();

	//抽選番号をランダムに設定

	random();

	//ビンゴ開始

	for (x = 1; x < 2; x++) {
		printf("Let's start this geme.\n");
		for (y = 0; y < 1; y++) {
			printf("Are you ready?(Yes→1)\n");
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
					printf("Next?(Yes→1)\n");
					scanf("%d", &x);
				}
			}else {
				printf("Error.One more please.\n");
				y = y - 1;
			}
		}
		printf("Bingo!Congratulations.Bingo was the %d time.\nLet's play again!\nDo you play more?(Yes→1:No→2)\n",i+1);
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

//-----以下関数-----

//ビンゴカード作成関数

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

//ビンゴカード出力関数

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

//1～７５までをランダムに設定

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

//穴をあける関数

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

//ビンゴになったか確認する関数

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