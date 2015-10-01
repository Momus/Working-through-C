#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300 */

main()
{
  int fahr ;


  for (farh = 300 ; fahr >= 0 ; fahr = fahr - 20)

    printf( "%3d %6.1f\n" , fahr , (5.0/9.0) * (fahr - 32)) ;


}
