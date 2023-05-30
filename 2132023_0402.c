#include <stdio.h>

int main(void)
{
    int absence, score, gpa, citalert;
    scanf("%d", &absence);
    scanf("%d", &score);
    scanf("%d", &gpa);
    citalert=0;

    if(absence>=30){
        if(60>=score){
            if(gpa<2){
                citalert=1;
            }
        }
    }

    printf("%d\n",citalert);
    return 0;
}