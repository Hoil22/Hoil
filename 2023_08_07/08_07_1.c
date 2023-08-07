#include <stdio.h>

int main(){

    int score[5]={};
    int sum=0;

    printf("점수를 입력하시오:");
    for(int j=0;j<5;j++)
        scanf("%d",&score[j]);
    for(int i=0;i<5;i++)
        sum+=score[i];

    printf("총점은 %d점, 평균은 %d점 입니다.",sum, sum/5);

    return 0;
}