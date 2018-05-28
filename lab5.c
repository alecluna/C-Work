/* Alec Luna                                       */
/* Lab 5                                           */
/* Figure the area and circumference of a cylinder */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define FILE_IN  "lab5.dat"
#define FILE_OUT "lab5.out"

int main(void)
{

  int count=0;
  double radius=0.0, height=0.0, area=0.0, vol=0.0;
	
  FILE * input_file;
  FILE * output_file;
 
  input_file = fopen("lab5.dat", "r"); //read

    if (input_file == NULL)
       { 
         printf("Error on opening the input file \n");
         exit(EXIT_FAILURE);  
       }

  output_file = fopen("lab5.out", "w"); //write 
    if (output_file == NULL)
        {
          printf("Error on opening the output file \n");
          exit(EXIT_FAILURE);
        } 

  fprintf(output_file,  "\nAlec Luna.    Lab5.\n ");

  while ((fscanf(input_file,"%lf%lf",&radius,&height))== 2)
  {     
        
        area = M_PI * radius * radius;
        vol = M_PI * radius * radius * height;
        count = count + 1;
	
        fprintf(output_file, "\nCylinder %1d",  count);
	fprintf(output_file, "\nThe radius is:    %9.3f", radius);
	fprintf(output_file, "\nThe height is:    %9.3f", height); 
	fprintf(output_file, "\nThe top area is:  %9.3f", area);
	fprintf(output_file, "\nThe volume is:    %9.3f\n", vol);
  }

  fclose(input_file);
  fclose(output_file);
  return EXIT_SUCCESS;
}


