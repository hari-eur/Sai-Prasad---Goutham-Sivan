//GCD OF TWO NUMBERS IN C
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter the num1 :\t");
    scanf("%d",&num1);
    printf("Enter the num2 :\t");
    scanf("%d",&num2);
    int lcm = (num1>num2)?num1:num2;
    int flag=1;
    while(flag!=0){
        
        if((lcm%num1==0)&&(lcm%num2==0)){
            flag=0;
        }
        lcm++;
    }
    int gcd = (num1*num2)/lcm;
    printf("The GCD OF %d AND %d id %d",num1,num2,gcd+1);
    return 0;
}