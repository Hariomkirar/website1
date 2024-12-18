#include<stdio.h>
int maize(int cr,int cc,int er,int ec){
    int waysright=0;
    int waysdown=0;
    if(cr==er && cc==ec) return 1;
    if(cr<er  && cc<ec){
        waysright+=maize(cr,cc+1,er,ec);
        waysdown+=maize(cr+1,cc,er,ec);
    }
    if(cr==er){
        waysright+=maize(cr,cc+1,er,ec);
    }
if(cc==ec){
        waysdown+=maize(cr+1,cc,er,ec);
    }
    int totalways= waysdown+waysright;
    return totalways;
}
int main(){
    int n,m;
printf("enter no of rows: ");
scanf("%d",&n);
printf("enter no of columns: ");
scanf("%d",&m);
int ways=maize(1,1,n,m);
printf("the total ways to reach at the corner of maze are %d ",ways);
    return 0;
}