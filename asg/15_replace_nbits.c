/*
Name: Karuna R
Date: 
Description: 
Read an int n, put the (b-a+1) lsb’s of n into i[b:a]
i.e to take (b-a+1) lsb from n and replace in i at positions b:a bits    
Input: 
Output: 

logic:-
n = 11  = 0000 1011
i = 174 = 1010 1110
a = 3
b = 5
x_bits = b-a+1 = 5-3+1 = 3
output i= 1001 1110 = 158

    Step1: Take n_bits from LSB of num n, by generating a mask 
    Step2: Clear i[5:3],by generating a mask 
    Step3: Move the n to b:a and then n | i 

 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a,b,n_bits,mask,mask1,shift_bits;
    printf("Enter the num n: ");
    scanf("%d",&n);
    printf("Enter the num i: ");
    scanf("%d",&i);
    
    printf("Enter the num a: ");
    scanf("%d",&a);
    printf("Enter the num b: ");
    scanf("%d",&b);

    n_bits = b-a+1;

    // Step1: Take n_bits from LSB of num n, by generating a mask 
    mask = (1<<n_bits)-1;
    n &= mask;

    // Step2: Clear i[5:3],by generating a mask 
    shift_bits = (b-n_bits+1); //Position - nbits + 1
    mask1 = ((1<<n)-1) << shift_bits;
    i &= (~mask1);

    // Step3: Move the n to b:a and then n | i 
    n = n << shift_bits; // move the n to actual positions
    i |= n;
    printf("Output value is %d\n",i);
    return 0;    
}

/*----------------------------------------------------------------
Execution steps and Output:-


*/