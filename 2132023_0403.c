#include <stdio.h>

int main(void)
{
	int size, g, price;
	scanf("%d",&size);
	scanf("%d",&g);
	
	if(size==0){
		if(50>=g){
			price=120;
		}else if(100>=g){
			price=140;
		}else if(150>=g){
			price=210;
		}else if(250>=g){
			price=250;
		}else if(500>=g){
			price=390;
		}else if(1000>g){
			price=580;
		}
	}else if(size==1){
		if(50>=g){
			price=200;
		}else if(100>=g){
			price=220;
		}else if(150>=g){
			price=300;
		}else if(250>=g){
			price=350;
		}else if(500>=g){
			price=510;
		}else if(1000>g){
			price=710;
		}
	}
	printf("%d\n",price);
	return 0;
}