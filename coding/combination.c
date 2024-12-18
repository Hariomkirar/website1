#include<stdio.h>
int factorial(int n){
    int x=1;
    int y=n;
    for (int i=1;i<=n;i++){
       x=x*y;
       y--;
    }
     return x;
}
int combination(int n, int r){
int combi=factorial(n)/(factorial(r)*factorial(n-r));
return combi;
}
int main(){
    int n,r;
    printf("enter value of n :");
    scanf("%d",&n);
    printf("enter value of r :");
    scanf("%d",&r);
    int ncr= combination(n,r);
    printf("the value of ncr will be %d",ncr);
        return 0;
}