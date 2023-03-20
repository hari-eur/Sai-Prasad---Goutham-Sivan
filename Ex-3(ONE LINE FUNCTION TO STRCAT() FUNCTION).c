//ONE LINE FUNCTION FOR STRCAT() IN C
#include<stdio.h>
void my_strcat(char *dest, char *src)
{
  (*dest)? my_strcat(++dest, src): (*dest++ = *src++)? my_strcat(dest, src): 0 ;
}
  
/* driver function to test above function */
int main()
{
  char dest[100] = "Hello";
  char *src = "sir";
  my_strcat(dest, src);
  printf(" %s ", dest);
  getchar();
}  