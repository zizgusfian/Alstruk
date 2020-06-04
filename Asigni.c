/* Assignement dan print */
#include <stdio.h>
#include <limits.h>
int
main ()
{
/* Kamus */
int i;
long int ii;
/* Program */
   printf ("hello\n\n");
   i = 1234;
  ii = 123456;
  printf ("Ini nilai i=1234 = : %d \n", i);
  printf ("Ini nilai ii=123456 : %10d \n\n", ii);
/* print nilai batas integer */
  printf ("Min dan Max integer : %d, %d \n", INT_MIN, INT_MAX);
  printf ("Max long integer : %ld, %ld \n", LONG_MAX);
return 0;
}
