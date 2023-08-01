#include <stdio.h>

int main(){

    char name[20];
    int age=0;
    double weight=0;
    double height=0;
    char crime[20];

    printf("이름이 뭐예요?");
    scanf("%s",name);
    
    printf("몇 살이에요?");
    scanf("%d",&age);
    
    printf("몸무게는 몇 kg이에요?");
    scanf("%lf",&weight);
    
    printf("키는 몇 cm에요?");
    scanf("%lf",&height);
    
    printf("어떤 범죄를 저질렀어요?");
    scanf("%s",crime);

    printf("\n--- 범죄자 정보 ---\n");
    printf("이름 : %s\n", name);
    printf("나이 : %d\n", age);
    printf("몸무게 : %f\n", weight);
    printf("키 : %f\n", height);
    printf("범죄명 : %s\n", crime);

    return 0;
}