//ONE LINE FUNCTION TO STRCMP() FUNCTION IN C
#include<stdio.h>
int my_strcmp(char *a, char *b)
{
  return (*a == *b && *b == '\0')? 0 : (*a == *b)? my_strcmp(++a, ++b): 1;
} 

int main()
{
  char *a = "ONE";
  char *b = "ONE";
  if(my_strcmp(a, b) == 0)
     printf(" String are same ");
  else  
     printf(" String are not same ");  
  
  getchar();
  return 0;
}  