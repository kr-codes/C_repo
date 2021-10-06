/*
Name: Karuna R
Date: 
Description: To print bits of +ve and -ve numbers 
+12 ->  0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0
-12 ->  1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 0 1 0 0

logic:-
if msb is 1 number is -ve
if msb is 0 number is +ve

if (num & 1) print 1
else         print 0

 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter the number: \n");
    scanf("%d",&num);
    printf("+%d -> ",num);

    for (int i = 0; i <= 31; i++){
        if((num >> (31 - i))& 1)
            printf(" 1");
        else
            printf(" 0");
    }
    printf("\n");
    
    printf("-%d -> ",num);
    num = (-num);
    for (int i = 0; i <= 31; i++){
        if((num >> (31 - i))& 1)
            printf(" 1");
        else
            printf(" 0");
    }
    printf("\n");
    return 0;    
}

/*----------------------------------------------------------------
Execution steps and Output:-

xyz@Apple asg % gcc 12_print_bits_signed_unsigned.c
xyz@Apple asg % ./a.out                            
Enter the number: 
12
+12 ->  0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0
-12 ->  1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 0 1 0 0

*/