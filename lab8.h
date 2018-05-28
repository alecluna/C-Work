* your name here */
/* lab8.h  */

#define NCOMPETITORS 4
#define N_ATTEMPTS 6

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OUT_FILENAME "lab8_out.txt"
#define IN_FILENAME "lab8sample.dat"

/* DECLARE the typedef structs */





/* FUNCTION PROTOTYPES */

/* get_data is a function to get and read data */
void get_data (char *filename,                      /* input  */ 
	       jumper_t jump_list[NCOMPETITORS] );  /* output */

/* open_out_file is a function to open the output file */
FILE * open_out_file (void);
		
/* get_stats is a function to do figure the best jump for each     */
/* jumper, compute the all-over average of the best jumps, and     */
/* find the longest jump  on the track and each jumper's deviation */
/* from the winning jump                                           */
void get_stats(jumper_t jump_list[NCOMPETITORS], /* in & out */
	       stats_t *jump_stats);   		 /* output   */

				
/*  print_all is a function to print things out. */ 
/*  All of its arguments are input  */
void print_all(FILE * out_file,
	       jumper_t jump_list[NCOMPETITORS],
	        stats_t *jump_stats);				 
         
/*---end of lab8.h ---------------------------------*/	 
