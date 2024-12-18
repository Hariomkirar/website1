#include<stdio.h>
int main(){
    int arr[5]={1,2,2,3,4};
    printf("%d",arr[1]);
        int inp[5];
    for (int i=1;i<=5;i++){
    
        printf("enter a number:");
        scanf("%d",&inp[i]);
    }
        printf("%d",inp[3]);
    return 0;
}