#include <stdio.h>

struct book{
    int id;
    char *title;
    int available;
};

void list(struct book *B);

int main(){
    struct book B[4]={
        {1,"C �Թ���", 1},
        {2,"���̽� �⺻��",1},
        {3,"�ڹ� �⺻��",1},
        {4,"���̽� �߱���",1}
    };

    int input;

    while(1){
        list(B);
        printf("����/�ݳ� �� å ��ȣ�� �Է��ϼ���.(����:-1): ");
        scanf("%d",&input);

        if(input==-1){
           printf("���α׷��� �����մϴ�.\n");
           break;}
        if(input<1||input>4){
            printf("�߸��� �Է��Դϴ�.\n");
            continue;}
        if(B[input-1].available==0){
            printf("%s �ݳ��� �Ϸ�Ǿ����ϴ�.\n", B[input-1].title);
            B[input-1].available=1;
        }
        else{
            printf("%s ������ �Ϸ�Ǿ����ϴ�.\n",B[input-1].title);
            B[input-1].available=1;
        }
        
    }    

}
void list(struct book*B){
    char*available="���Ⱑ��";
    char*no_available="����Ұ���";

    printf("��ü ���� ����Դϴ�.\n");
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