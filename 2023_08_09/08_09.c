#include <stdio.h>

int square(int *arr);

int main(){
    int j;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    square(arr);

    for(j=0;j<10;j++){
        printf("%d, ",arr[j]);
    }

    return 0;
}

int square(int *arr){
    int i;
    for(i=0;i<10;i++){
        if(arr[i]%2==0){
            arr[i]=arr[i]*arr[i];
        }
    }
}