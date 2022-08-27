#include <stdio.h>
#include <stdlib.h>



void my_square(const int  c, const int  r) {


// c = number of columns
// r = number of rows


char display[c];  // variable that will be printed
display[0] = '\0';


    for(int i = 0; i < r; i++) {  // iterate through rows
        for(int j = 0; j < c; j++) {  // iterate through column

           if((j==0 || j == c-1) && (i == 0 || i == r-1)) {  // if at the corners, add 'o'
                //printf("First if statement: j: %d, i: %d\n", j, i);
                display[j] = 'o';
           }

           else if ((j != 0 && j != c-1) && (i == 0 || i == r-1)) {  // if in first or last row and not in the corners add '-'
                display[j] = '-';
           }

           else if ((j == 0 || j == c-1) && (i != 0 || i != r-1)) {  // if in first or last column and not in first or last row add '|'
                display[j] = '|';
           }

           else if ((j != 0 && j != c-1) && (i != 0 || i != r-1)) {  // if not in first or last column and not in first or last row add ' '
                display[j] = ' ';
           }

           display[c] = '\0';

        }
        printf("%s\n", display);
    }

    return;

}




int main(int argc, char *argv[])
{

     if(argc != 3){

          printf("Error. Please provide one input for number of columns and another for number of rows.");

    }

     const int c = atoi(argv[1]);
     const int r = atoi(argv[2]);


    my_square(c, r);


    return 0;
}

