#include <stdio.h>

struct book{
    int id;
    char *title;
    int available;
};

void list(struct book *B);

int main(){
    struct book B[4]={
        {1,"C 입문편", 1},
        {2,"파이썬 기본편",1},
        {3,"자바 기본편",1},
        {4,"파이썬 중급편",1}
    };

    int input;

    while(1){
        list(B);
        printf("대출/반납 할 책 번호를 입력하세요.(종료:-1): ");
        scanf("%d",&input);

        if(input==-1){
           printf("프로그램을 종료합니다.\n");
           break;}
        if(input<1||input>4){
            printf("잘못된 입력입니다.\n");
            continue;}
        if(B[input-1].available==0){
            printf("%s 반납이 완료되었습니다.\n", B[input-1].title);
            B[input-1].available=1;
        }
        else{
            printf("%s 대출이 완료되었습니다.\n",B[input-1].title);
            B[input-1].available=1;
        }
        
    }    

}
void list(struct book*B){
    char*available="대출가능";
    char*no_available="대출불가능";

    printf("전체 도서 목록입니다.\n");
    printf("==================================\n");
    for(int i=0;i<4;i++){
        printf("%d. %-16s", B[i].id, B[i].title);

        if(B[i].available)
            printf("[%s]\n", available);
        else
            printf("[%s]\n",no_available);
    }
    printf("==================================\n");
}