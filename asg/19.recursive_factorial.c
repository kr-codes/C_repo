/*
Name: Karuna R
Date: 
Description: To check factorial in a recursive method and using only main function 
Input: Read a number n 
Output: call main for calculating factorial

"Static" storage class
- any variable defined as static will be defined/initialized only once 
and can be modified later any # of times

logic:-
Factorial: 4! = 4 * 3 * 2 * 1 = 24

 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    static int num, flag = 0, fact = 1;
    static char choice;
    do{
        if (flag == 0) {
            printf("Enter the number for the factorial:");
            scanf("%d",&num);
            flag = 1;
        }

        if(num == 0){
            printf("Factorial is: %d\n",fact);
            printf("Do you want to continue?(y/n):");
            scanf(" %s",&choice);
        }
        else{
            fact *= (num--);
            main();
        }
    }while(choice == 'y' | choice == 'Y');
    return 0;    
}
/*----------------------------------------------------------------
Execution steps and Output:-
gcc 19.recursive_factorial.c
./a.out            

Enter the number for the factorial:5
Factorial is: 120
Do you want to continue?(y/n):y
Factorial is: 120
*/