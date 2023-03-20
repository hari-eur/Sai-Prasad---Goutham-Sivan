//PROGRAM TO FIND MAXIMUM SUBMATRIX OF IS IN A BINARY MARTRIX
#include<stdio.h> 
#define bool int 
#define row 6 
#define col 5 
  
void squreSubarray (bool arr1[row][col]) 
{ 
  int i,j; 
  int sub_arr[row][col]; 
  int max_s, max_i, max_j;  
   
  for(i = 0; i < row; i++) 
     sub_arr[i][0] = arr1[i][0]; 
   
  for(j = 0; j < col; j++) 
     sub_arr[0][j] = arr1[0][j]; 
       
  for(i = 1; i < row; i++) 
  { 
    for(j = 1; j < col; j++) 
    { 
      if(arr1[i][j] == 1)  
        sub_arr[i][j] = min(sub_arr[i][j-1], sub_arr[i-1][j], sub_arr[i-1][j-1]) + 1; 
      else
        sub_arr[i][j] = 0; 
    }     
  }  
    
  max_s = sub_arr[0][0]; max_i = 0; max_j = 0; 
  for(i = 0; i < row; i++) 
  { 
    for(j = 0; j < col; j++) 
    { 
      if(max_s < sub_arr[i][j]) 
      { 
         max_s = sub_arr[i][j]; 
         max_i = i;  
         max_j = j; 
      }         
    }                  
  }      
    
  printf("The maximum size submatrix is: \n"); 
  for(i = max_i; i > max_i - max_s; i--) 
  { 
    for(j = max_j; j > max_j - max_s; j--) 
    { 
      printf("%d ", arr1[i][j]); 
    }   
    printf("\n"); 
  }   
}      
  
int min(int a, int b, int c) 
{ 
  int m = a; 
  if (m > b)  
    m = b; 
  if (m > c)  
    m = c; 
  return m; 
} 
  
int main() 
{ 
  bool arr1[row][col] =  {{0, 1, 0, 1, 1},  
                   {1, 1, 1, 1, 0},  
                   {1, 1, 1, 1, 0}, 
                   {1, 1, 1, 1, 0}, 
                   {1, 1, 1, 1, 1}, 
                   {0, 1, 0, 1, 0}}; 
        int i,j;                   
 //------------- print original array ------------------	
	printf("The given array in matrix form is :  \n");
	for(i = 0; i < row; i++)
	{
	for (j=0;j<col;j++)
	{
	printf("%d  ", arr1[i][j]);
    } 
	printf("\n");
	}
//------------------------------------------------------ 				   
                 
  squreSubarray(arr1); 
}