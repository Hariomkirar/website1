#include<stdio.h>
int factorial(int n){
    if(n==0) return 1;
    int fact=n*factorial(n-1);
    return fact;
}
int main(){
    int n;
    printf("enter value of n :");
    scanf("%d",&n);
    int fact= factorial(n);
    printf("the factorial of %d is %d",n,fact);
        return 0;
}