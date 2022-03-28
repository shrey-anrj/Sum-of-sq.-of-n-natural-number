#include <stdio.h>

void main ()
{
  int i, n,s;
  printf ("Enter no of natural no. to be added:\t");
  scanf ("%d", &n);
  printf("\nN natural numbers are:");
  for (i = 0; i <= n ; i++)
    {
        printf("\t%d\n",i);
        s=(n*(n+1)*(2*n+1))/6;
    }
    	    printf ("\n%d is the sum of square of n natural numbers", s);

}
