#include<stdio.h>
int main(){
    int choice;
    printf("1-SBI\t2-HDFC\t3-IOB\t4-CUB\n");
    printf("Enter your Bank Number:\t");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Welcome to SBI\n");
            int choice1;
            printf("1-SAVING ACCOUNT\t2-CURRENT ACCOUNT\n");
            scanf("%d",&choice1);
            switch(choice1){
                case 1:
                    printf("The interest will be 4 percent");
                    break;
                case 2:
                    printf("The interest will  be 6 percent");
                    break;
            }
            break;
        case 2:
            printf("Welcome to HDFC\n");
            int choice2;
            printf("1-SAVING ACCOUNT\t2-CURRENT ACCOUNT\n");
            scanf("%d",&choice2);
            switch(choice2){
                case 1:
                    printf("The interest will be 8 percent");
                    break;
                case 2:
                    printf("The interest will  be 10 percent");
                    break;
            }
            break;
        case 3:
            printf("Welcome to IOB\n");
            int choice3;
            printf("1-SAVING ACCOUNT\t2-CURRENT ACCOUNT\n");
            scanf("%d",&choice3);
            switch(choice3){
                case 1:
                    printf("The interest will be 6 percent");
                    break;
                case 2:
                    printf("The interest will  be 9 percent");
                    break;
            }
            break;
        case 4:
            printf("Welcome to CUB\n");
            int choice4;
            printf("1-SAVING ACCOUNT\t2-CURRENT ACCOUNT\n");
            scanf("%d",&choice4);
            switch(choice4){
                case 1:
                    printf("The interest will be 10 percent");
                    break;
                case 2:
                    printf("The interest will  be 12 percent");
                    break;
            }
            break;
        default:
            printf("Enter a valid bank name.");
    }
}