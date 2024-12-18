#include<stdio.h>
int power(int a, int b){
    int x=1;
    for (int i=1;i<=b;i++){
        x=x*a;}
        return x;
}
int main(){
    int b,p;
    printf("enter base: ");
    scanf("%d",&b);
    printf("enter power: ");
    scanf("%d",&p);
    int pow=power(b,p);
    printf("%d raise to the power %d is %d",b,p,pow);
}