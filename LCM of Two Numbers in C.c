//LCM OF TWO NUMBERS IN C
#include<stdio.h>
int main(){
    int num1,num2,lcm,flag=1;
    printf("Enter the number1 :\t");
    scanf("%d",&num1);
    printf("Enter the number2 :\t");
    scanf("%d",&num2);
    lcm = (num1>num2)?num1:num2;
    while(flag!=0){
        if((lcm%num1==0)&&(lcm%num2==0)){
            printf("%d",lcm);
            flag=0;
        }
        lcm++;
    }
    return 0;
}