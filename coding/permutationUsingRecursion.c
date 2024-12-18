#include<stdio.h>
int factorial(int n){
    if(n==0)return 1;
    return n*factorial(n-1);
}
int permutation(int n, int r){
    return factorial(n)/factorial(r);
}
int main(){
    int n,r;
    printf("enter value of n: ");
    scanf("%d",&n);
    printf("enter value of r: ");
    scanf("%d",&r);
    int npr=permutation(n,r);
    printf("permutation of given numbers is %d",npr);
    return 0;
}