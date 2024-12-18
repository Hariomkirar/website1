#include<stdio.h>
float area(float a, float b){
    float ar=a*b/2;
    return ar;
}
int main(){
    float b,h;
    printf("enter base: ");
    scanf("%f",&b);
    printf("enter height: ");
    scanf("%f",&h);
    float ar =area (b,h);
    printf("area of triangle is : %f",ar);
    return 0;
}