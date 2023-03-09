//HALF PYRAMID IN C
#include<stdio.h>
int main(){
    int row;
    printf("Enter the rows:\t");
    scanf("%d",&row);
    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}