/*  Lab8 - Olympic long jump program  */

#include "lab8.h"

/*-----------------------------------------------------------*/
int main(void)
{
    jumper_t jump_list[NCOMPETITORS]; 
    stats_t jump_stats = {0.0, 0.0};	

    FILE * out_file;    /* file pointer for the output file  */
			
    out_file = open_out_file ();
    get_data(IN_FILENAME, jump_list);
    get_stats(jump_list, &jump_stats); 
		      
    print_all(out_file, jump_list, &jump_stats);
	
    return EXIT_SUCCESS;
}
/*-----------------------------------------------------------*/
