/*
Name: Karuna R
Date: 
Description: To swap 2 variables by pass by reference method 
Input: 
Output: 

logic:-
using bitwise method
x1=x0^y0
y1=x1^y0
x2=x1^y1

 */
#include <stdio.h>
#include <stdlib.h>

void swap(int *n1,int *n2){
    *n1 ^= *n2;
    *n2= *n1 ^ *n2;
    *n1 ^= *n2;
}

int main()
{
    int num1,num2;
    printf("Enter the Number1: ");
    scanf("%d",&num1);
    printf("Enter the Number2: ");
    scanf("%d",&num2);   
    
    swap(&num1,&num2);
    printf("\nAfter swapping\n");
    printf("Number1: %d\n",num1);
    printf("Number2: %d\n",num2); 
     
    return 0;    
}

/*----------------------------------------------------------------
Execution steps and Output:-
gcc 17.swap_pass_reference.c
./a.out                     
Enter the Number1: 5
Enter the Number2: 10

After swapping
Number1: 10
Number2: 5

*/