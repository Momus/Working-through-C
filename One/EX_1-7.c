#include <stdio.h>

/* Write a program to print the value of EOF */


main()
{

  char char_EOF ;
  int  int_EOF ;

  char_EOF = EOF ;

  int_EOF = EOF ;


  printf("This is the int version of EOF: ") ;
  printf("%d" , int_EOF ) ; 
  printf("\n") ;

  printf("This is the char version of EOF: ") ;
  putchar(char_EOF) ;
  printf("\n") ;


}

	
