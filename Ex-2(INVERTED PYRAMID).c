//INVERTED PYRAMID
#include<stdio.h>
int main(){
    int rows;
    printf("Enter the rows:\t");
    scanf("%d",&rows);
    int m=1;
    for(int i=rows;i>=1;i--){
        for(int j=1;j<=m;j++){
            printf(" ");
        }
        for(int k=1;k<=(2*i-1);k++){
            printf("*");
        }
        m++;
        printf("\n");
    }
    return 0;
}