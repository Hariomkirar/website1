#include<stdio.h>
int factorial(int n){
    int fact = 1;
    for (int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int combination(int n, int r){
    return factorial(n)/(factorial(n-r)*factorial(r));
}
int main(){
    int n;
    int nst=1;
printf("enter no of rows of pascal triangle: ");
scanf("%d",&n);
for (int i=0;i<=n;i++){
for (int j=1;j<=n-i;j++){
    printf(" ");
}
for (int k=0;k<=i;k++){
  int ick=combination(i,k);
  printf(" ");
  printf("%d",ick);
}
printf("\n");
}
    return 0;
}