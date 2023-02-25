//Armstrong Number
#include<stdio.h>
#include<math.h>
int main(){
    int a,size,temp,total=0;
    scanf("%d",&a);
    int num = a;
    for(size=0;a!=0;a=a/10,size++);
    temp = num;
    while(temp!=0){
        int digit = temp%10;
        total = total + pow(digit,size);
        temp = temp/10;
    }
    if(total==num){
        printf("%d is an Armstrong Number",num);
    }
    else{
        printf("%d is not an Armstrong Number",num);
    }
    return 0;
}