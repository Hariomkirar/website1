#include<stdio.h>
void hanoi(char s, char h,char d,int n){
    if(n==0) return;
    hanoi(s,d,h,n-1);
    printf("%c -> %c\n",s,d);
    hanoi(h,s,d,n-1);
    return;
}
int main(){
    int n;
    printf("enter no of disks: ");
    scanf("%d",&n);
    hanoi('A','B','C',n);
    return 0;
}