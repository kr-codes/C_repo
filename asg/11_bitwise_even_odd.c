/*
Name: Karuna R
Date: 
Description: To check if the number is odd or even i.e to check the LSB bit
Input: 
Output: 

logic:-
to check the LSB:
if LSB = 1; odd 
if LSB = 0; even

 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter the number to be verified:");
    scanf("%d/n",&number);

    //printf("number %d shifted is %d \n",number,(number & 1));
    if (number & 1)
        printf("Odd\n");
    else
        printf("Even!\n");	


    return 0;    
}

/*----------------------------------------------------------------
Execution steps and Output:-


*/