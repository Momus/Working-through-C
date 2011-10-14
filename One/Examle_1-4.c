#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

/* print Fahrenheit-Celsius table */

main()
{
  /* show that constants can be deifned here */

#define  NEEDLESS = 3.14159
  
  /* I want to see more values, let's see if we can change LOWER here */
  /* #define LOWER = -100 ---and it will error out*/

  int fahr;
  
  for (fahr = LOWER; fahr <= UPPER; fahr = fahr +STEP)
    printf("%3d %6.1f\n" , fahr, (5.0/9.0)*(fahr-32)) ;
}
