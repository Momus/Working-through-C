#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300 */

#define LOWER  0     /* LOWER limit of temperature table */
#define UPPER  300   /* UPPER limit */
#define STEP   20    /* STEP size */

main()
{
  float fahr, celsius ;
  /* int LOWER, UPPER, STEP ; */

  fahr = LOWER ;
  while (fahr <= UPPER) {
    celsius = 5.0 * (fahr-32.0) / 9.0 ;
    printf("%3.0f %6.3f\n" , fahr, celsius) ;
    fahr = fahr + STEP;
  }
}
