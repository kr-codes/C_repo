/*
Name: Karuna R
Date: 8/10/2021
Description: To check if a given number is odd or even and its signedness 
Input: any positive numbers or negative number withn the range
Output: Odd or even number within the range

logic:-
enter the number from user on the cmdline and
if((num %2) != 0 )
    printf ("the entered number is odd");
else 
    printf("Entered number is Even!"");

 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    if (argc < 2) {
      printf("\t missing argument!!! \n");
      exit(-1);
    }
    for(int i=1; i<argc; i++)
    {
        //Values taken from the user are considered as strings
        printf("num before is (string): %s \n",argv[i]); 
        // For the mod operation values needs to be an integer
        int num = atoi(argv[i]);
        printf("num after is (integer): %d \n",num); 

        if((num%2)!=0)
            printf("%d is odd \n",num);        
        else
            printf("%d is even \n",num);
            //return 1;
    }

    return 0;    
}

/*----------------------------------------------------------------
Execution steps and Output:-
karunarudresh@Apple asg % gcc 01_odd_even.c
karunarudresh@Apple asg % ./a.out 200      
num before is (string): 200 
num after is (integer): 200 
200 is even 
karunarudresh@Apple asg % ./a.out 275
num before is (string): 275 
num after is (integer): 275 
275 is odd
*/