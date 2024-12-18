#include<stdio.h>
int main(){
int n;
int nst=1;
printf("enter the number of rows: ");
scanf("%d",&n);
int rnst=2*n-3;
for(int i=1;i<=2*n-1;i++){
    if(i<=n){
 for (int j=1;j<=n-i;j++){
     printf("  ");
 }
for (int k=1;k<=nst;k++){
    printf("* ");
}
nst=nst+2;}
else {
    for (int j=1;j<=i-n;j++){
        printf("  ");
    }
    for (int k=1;k<=rnst;k++){
        printf("* ");
    }
    rnst-=2;
}
printf("\n");
}
return 0;
}