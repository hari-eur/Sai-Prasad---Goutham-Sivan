//FULL PYRAMID IN C
#include<stdio.h>
int main(){
    int rows;
    printf("Enter the rows:\t");
    scanf("%d",&rows);
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows-i;j++){
            printf(" ");
        }
        for(int k=0;k<(2*i-1);k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}