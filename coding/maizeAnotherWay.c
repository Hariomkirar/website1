#include<stdio.h>
int maize(int er,int ec){
    int totalways=0;
    if(er==1 && ec==1) return 1;
    if(er==1){
        totalways+=maize(er,ec-1);
    }
    if(ec==1){
        totalways+=maize(er-1,ec);
    }
    if(er>1 && ec>1){
        totalways+=(maize(er-1,ec)+maize(er,ec-1));
    }
    return totalways;
}
int main(){
    int n,m;
printf("enter no of rows: ");
scanf("%d",&n);
printf("enter no of columns: ");
scanf("%d",&m);
int ways=maize(n,m);
printf("there are %d ways to reach at the corner of the maize ",ways);
    return 0;
}