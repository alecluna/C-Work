/*-----------------------------------------------------------*/
/* print_all.c                                               */
/*  print_all is a function to print things out.             */
/*  All of its arguments are input arguments                 */

#include "lab8.h"

void print_all(FILE * out_file,
	       jumper_t jump_list[NCOMPETITORS],
	       stats_t *jump_stats)		 
{
    int r,c;

    fprintf(out_file, "\nTrack Results");

    fprintf(out_file,"\n\nName                  Try 1  Try 2  Try 3  Try 4  Try 5  "
		"Try 6  Personal Best  Deviation");
    fprintf(out_file,  "\n--------------------  -----  -----  -----  -----  -----  "
		"-----  -------------  ---------\n");

    for (r = 0; r< NCOMPETITORS; r++)
    {
	fprintf(out_file, "%-20s  ", jump_list[r].name);
	for (c = 0; c < N_ATTEMPTS; c++)
	    fprintf(out_file, "%5.2f  ", jump_list[r].attempts[c] );
		
	fprintf(out_file, "   %6.2f   ", jump_list[r].personal_best );
	fprintf(out_file, "    %6.2f   \n", jump_list[r].deviation );
    }

    fprintf(out_file, "\n\nBest Jump Average  = %6.2f meters ", jump_stats->average_of_best);
    fprintf(out_file, "\n\nWinning Jump       = %6.2f meters", jump_stats->winning_jump);
    fprintf(out_file, "\n\n");
    return;
}
/*--------------------------------------------------------*/
