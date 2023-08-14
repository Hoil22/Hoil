#include <stdio.h>

struct book{
    int id;
    char *title;
    int available;
};

int main(){
    struct book B1={1,'C 입문편',1};
    struct book B2={2, '파이썬 기본편',1};
    struct book B3={3,'자바 기본편',1};
    struct book B4={4,'파이썬 중급편',1};

    printf("전체 도서 목록입니다.");
    printf("===============================");
    

}