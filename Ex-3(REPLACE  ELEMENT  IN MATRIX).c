//REPLACE ELEMENTS IN MATRIX IN C
#include<stdio.h>
int main(){
    int element,size,i,j;
    
    printf("Enter the size:");
    scanf("%d",&size);
    
    int matrix[size][size];
    
    
    
    printf("enter the Element to be swapped:\t");
    scanf("%d",&element);
    printf("Enter the elements\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    
    
    for(i=1;i<size;i++){
        for(j=0;j<size;j++){
          if(matrix[i][j]==element){
              matrix[i][j]=matrix[i-1][j];
          }  
        }
    }
    
    printf("Swapped Matrix:\n");
     for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%d ",matrix[i][j]);
        }printf("\n");
    }
    
    return 0;
}

