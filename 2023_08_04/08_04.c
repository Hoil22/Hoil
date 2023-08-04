#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int j;
    int count=0;
    int y=1;
    for(j=1;j<24;j+=5){

    int ans;
    srand(time(NULL));

    int a=rand()%10+j*5;
    int b=rand()%20+j*5;
    
    //printf("%d %d", a,b);

    printf("######## %d 번째 비밀번호 ########\n", y);
    printf("%d * %d ?\n", a,b);
    printf("##################################\n");
    printf("비밀번호를 입력하세요. (종료를 원하면 -1 입력):");
    scanf("%d", &ans);

    if(ans==a*b){
        printf("GOOD! 정답입니다!\n\n");
        count++;
        }
    else if(ans==-1)
        return 0;
    else if(ans!=a*b)
        printf("땡! 틀렸습니다!\n\n");

    y++;
    }

    printf("비밀번호를 %d개 맞혔습니다.",count);
    return 0;
}