//PASSWORD VALIDATION IN C USING POINTER AND WITHOUT STRING AND CHAR FUNCTIONS
#include<stdio.h>
int main(){
    char password[100];
    int size;
    int numflag=0,upperflag=0,specialflag=0;
    printf("Enter the Password : \n");
    scanf("%s",password);
    for(size=0;password[size]!='\0';size++);
    if(size==8){
        for(int i=0;i<size;i++){
            if((*(password+i)>='A')&&(*(password+i)<='Z')){
                upperflag=1;
            }
            else if((*(password+i)>='0')&&(*(password+i)<='9')){
                numflag=1;
            }
            else if((*(password+i)>='a')&&(*(password+i)<='z')){
                
            }
            else{
                specialflag=1;
            }
            
        }
    }
    else{
        printf("The Password length should 8 or less than 8 Characters.");
    }
    if((upperflag==1)&&(numflag==1)&&(specialflag==1)){
        printf("Your Password is Strong");
    }
    else{
        printf("Your Password is not strong");
    }
    return 0;
}