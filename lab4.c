/**********/
/*  Alec Luna */
/*  Lab4      */
/*  2/20/17   */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void main()
{
  int start;
  int end;
  int i;
  int squared;
  double sqroot;
  double sine;
  printf("\n");
  printf("Alec Luna. Lab 4\n");
  printf("\nEnter your Start Number: ");
  scanf("%d",&start);
  printf("\n");

  printf("Enter your End Number: ");
  scanf("%d", &end);
  
  printf("  N       Squared     Square Root       Sine  \n");
  printf("-----     -------     -----------     --------\n");
  for (i = start; i <= end; i++)
  {
 
  squared = i * i;
  sqroot = sqrt(i);
  sine = sin(i);  
  printf("%4d %11d %15.3f %12.3f\n",i,squared,sqroot,sine);
  } 
}
