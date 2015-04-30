 /*************************************************************************
 *                   Mureithi David Wachira                               *
 *                   P15/2204/2011                                        *
 *                                                                        *
 *                   University of Nairobi                                *
 *                   School of Computing & Informatics                    *
 *                                                                        *
 *                   Date: Tueday 12th February 2013                      *
 *                                                                        *
 *                   Write a program that prints a diamond                *
 *                   The program should get from the user                 *
 *                   the symbol to use.                                   *
 *                   The user should also provide                         *
 *                   the width of the diamond                             *
 *                                                                        *
 *************************************************************************/
#include <stdio.h>                          //C Standard Input and Output Library

int main() {

	int diamond_width, diamond_print_counter, diamond_line_counter, diamond_space = 1;          // Declaration for the various variable in use in the program
	char diamond_symbol[]="c";                                                                  // Declaration of an array of type char

    printf("/**************************************************************************\n *                   Mureithi David Wachira                               *\n *                   P15/2204/2011                                        *\n *                                                                        *\n *                   University of Nairobi                                *\n *                   School of Computing & Informatics                    *\n *                                                                        *\n *                   Date: Tueday 12th February 2013                      *\n *                                                                        *\n *                   Write a program that prints a diamond                *\n *                   The program should get from the user                 *\n *                   the symbol to use.                                   *\n *                   The user should also provide                         *\n *                   the width of the diamond                             *\n *                                                                        *\n *************************************************************************/\n");



        printf("Please enter the symbol for making the diamond:\n");                            // user is prompted to enter a symbol
        scanf("%s",&diamond_symbol);                                                            // capture of the user input for the symbol


	printf("Please enter the width of the diamond:\n");                                         // user is prompted to enter the diamond width
	scanf("%d", &diamond_width);                                                                //capture of the user input for the diamond width

	if (diamond_width%2==0)                                                                     //Testing whether the diamond width entered is even
     {diamond_width=((diamond_width/2));
        printf("\nThe diamond width changed to size %d \nin order to make a true diamond\n\n", (2*diamond_width)-1); //User is alerted fo the change of the diamond width
     }
    else if (diamond_width%2==1)                                                                //Testing whether the diamond width entered is odd
     {diamond_width=((diamond_width/2)+1);}


	// Commencement of the printing of the upper triangle.
	diamond_space = diamond_width - 1;                                                          // Assignment of diamond_width less 1 to  diamond_space
	for ( diamond_line_counter = 1 ; diamond_line_counter <= diamond_width ; diamond_line_counter++ ) {
		for ( diamond_print_counter = 1 ; diamond_print_counter <= diamond_space ; diamond_print_counter++ )
			printf(" ");                                                                        // Printing of the diamond space
		diamond_space--;                                                                        // Decrement of the diamond space counter by 1
		for ( diamond_print_counter = 1 ; diamond_print_counter <= 2*diamond_line_counter-1 ; diamond_print_counter++)
			printf("%s", diamond_symbol);                                                       // Printing of the diamond symbol
		printf("\n");                                                                           // Moving to the next line
	}

    // Commencement of the printing of the lower triangle.
	diamond_space = 1;                                                                           // Initialisation of the diamond space counter to 1
	for ( diamond_line_counter = 1 ; diamond_line_counter <= diamond_width - 1 ; diamond_line_counter++ ) {
		for ( diamond_print_counter = 1 ; diamond_print_counter <= diamond_space; diamond_print_counter++)
			printf(" ");                                                                         // Printing of the diamond space
		diamond_space++;                                                                         // Increment of the diamond space counter by 1
		for ( diamond_print_counter = 1 ; diamond_print_counter <= 2*(diamond_width-diamond_line_counter)-1 ; diamond_print_counter++ )
			printf("%s", diamond_symbol);                                                       // Printing of the diamond symbol
		printf("\n");                                                                           // Moving to the next line
	}
	return 0;                                                                                   // Indication that the program executed successfully
}                                                                                               // End of program
