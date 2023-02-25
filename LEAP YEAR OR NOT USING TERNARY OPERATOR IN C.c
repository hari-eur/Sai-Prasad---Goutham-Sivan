//LEAP YEAR OR NOT USING TERNARY OPERATOR IN C
#include<stdio.h>
int main(){
    int year;
    printf("Enter the year :\t");
    scanf("%d",&year);
    ((year%4==0) && ((year%400==0) || (year%100!=0)))?printf("Yes"):printf("No");
    return 0;
}