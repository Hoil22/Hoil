#include<stdio.h>

int check(int * arr, int val);
    
int main(){

    int ans[]={};
    int j;
    int num;

    printf("발모제를 선택해주세요(선택하고 싶은 만큼.. 2개 or 3개):");
    for(j=1;j<=3;j++){
        scanf("%d", &ans[j]);
        printf("%d\n", ans[j]);
    }
    //정답 발모제는 4번이라 가정
    num = check (ans, 4);
    //printf("%d", num);

    if(num==1)
        printf("머리자람");
    else
        printf("머리안자람");

    return 0;
}

int check(int* arr, int val){
    for(int i=0;i<4;i++){
        if(arr[i]==val)
            return 1;
        else
            return 0;
    }
}