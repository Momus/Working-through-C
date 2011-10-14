#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300 */

main()
{
  float fahr, celsius ;
  int lower, upper, step ;

  lower = -300 ;   /* lower limit of temperature table */
  upper = 300 ; /* upper limit */
  step = 20 ;   /* step size */

  celsius = upper ;

  printf("Celcius to Fahrenheit Conversion table\n") ;

  while (celsius >= lower) {
    fahr = ((celsius  * (9.0 / 5.0)) + 32.0) ; 
    printf("%3.0f \t %6.3f\n" , celsius, fahr) ;
    celsius = celsius - step;
  }
}
