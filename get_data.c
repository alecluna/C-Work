/*-----------------------------------------------------------*/
/* get_data.c                                                */
/* This function will open and read data into an array.      */
/* It will return the value of the real length of the array. */

#include "lab8.h"

void get_data (char *filename,                 	    /* input  */ 
	       jumper_t jump_list[NCOMPETITORS] )   /* output */
{
    int n, c;
    FILE *in_file;

    /* Open the data file and read in the array */
    in_file = fopen(filename, "r");
    if (in_file == NULL)
    {	
	printf("Error on fopen of %s \n", filename);
	exit(EXIT_FAILURE);
    }
	
    /* Read the competitor's names first. */

    for (n=0; n < NCOMPETITORS; n++)	/* "n" for names of jumpers */
    {
	/* "fgets" gets a string including the new line attached */
	fgets(jump_list[n].name, 20, in_file); 

	/* strings require that the last character is NULL */
	jump_list[n].name[20] = 0;

	/* This code removes the attached new line */
	/* It will find the new line embedded in the name which it 
	   then sets to NULL.  */
	*strchr(jump_list[n].name, '\n') = 0;
    }

    /* Read the sets of attempts/ */
    for (c=0; c < N_ATTEMPTS; c++) 
  	for(n = 0; n < NCOMPETITORS; n++)
	   fscanf(in_file, "%lf", &jump_list[n].attempts[c]); 
	
    fclose(in_file);
    return;
}

/*----------------------------------------------------------------*/
