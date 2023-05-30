/*
今回の工夫した箇所
・５×５マスのビンゴにした
・各箇所にコメントを入れプログラムをわかりやすくした
・変数名をわかりやすくした
・字下げを意識した
・少しでも点数が上がるようにした
・出力結果がわかりやすく表示されるようにした
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
	
	//ビンゴカードの作成
	
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
	
	//ビンゴカードの出力
	
	printf("これが今回のビンゴカードです\n");
	for(a=0;a<=4;a++){
		for(b=0;b<=4;b++){
			printf("%3d",data[a][b]);
		}
		printf("\n\n");
	}
	
	//抽選番号をランダムな順番に設定
	
	for(a=0;a<=74;a++){
		num[a] = a + 1;
	}
	for(a=74;a>0;a--){
		target = rand() % a;
		temp = num[target];
		num[target] = num[a];
		num[a] = temp;
	}
	
	//ビンゴ開始
	printf("それでは始めます\n\n");
	for(a=0;a<=74;a++){
		printf("%d番目の番号は%3dです\n\n",a+1,num[a]);
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
		printf("次に進む場合は1を押してください\n");
		scanf("%d",&next);
	}
	printf("Bingo!!です！\nおめでとうございます！\nまた遊んでください!\n");
	
	return 0;
}

//以下関数
