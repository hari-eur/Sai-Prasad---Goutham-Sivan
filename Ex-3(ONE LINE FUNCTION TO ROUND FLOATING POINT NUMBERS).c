//ONE LINE FUNCTION TO ROUND FLOATING POINT NUMBERS IN C
#include <stdio.h>
   int my_round(float number) {
   return (int) (number < 0 ? number - 0.5 : number +0.5);
}
int main () {
   printf("Rounding of (2.48): %d\n", my_round(2.58));
   printf("Rounding of (-5.79): %d\n",my_round(-5.79));
}