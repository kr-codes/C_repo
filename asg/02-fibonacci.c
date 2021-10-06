/*
Name: Karuna R
Date:8/12/2021 
Description: To check generate fibonacci series
Input: 
Output:1 1 2 3 5 8 13 ... 

logic:-
Enter n number either positive or negative numbers
and based on n generate the series of values and print them.
 */

#include <stdio.h>
#include <stdlib.h>
signed int array[] = {0, 1, 0};

int main()
{
    signed int num;
    printf("Enter the number of fibonacci series to be printed(+ve/-ve):");
    scanf(" %d", &num);

    for(int i=0; array[i+2]<abs(num);i++){
        if(num>0)
            array[i+2]=array[i]+array[i+1];
        else
            array[i+2]=array[i]-array[i+1];
    }

    for(int k=0; array[k]<abs(num);k++){
            printf("%d\n",array[k]);
    }
    return 0;
}

/*----------------------------------------------------------------
Execution steps and Output:-


*/