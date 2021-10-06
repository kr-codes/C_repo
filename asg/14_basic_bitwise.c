/*
Name: Karuna R
Date: 
Description: 
//To implement the following functions
int get_nbits(int num, int n);
int replace_nbits(int num, int n, int val);
int get_nbits_from_pos(int num, int n, int pos);
int replace_nbits_from_pos(int num, int n, int pos, int val); int toggle_bits_from_pos(int num, int n, int pos);
int print_bits(unsigned int num, int n);

logic:-
 --> int get_nbits(int num, int n)
    num = 10; n = 2
    10 -> 0000 1010 
    take 2 bits from LSB -> 10 and return decimal equiv -> 2

    Sol: Step 1: To create a mask like -> 0000 0011
        mask -> (1<<n) -> 1<<2 -> 0100 -> (4)
             ->  4 - 1 -> (3) -> 0011
        Step 2: To combine with num
                num = num & mask;

 -->   int replace_nbits(int num, int n, int val);
    num = 10; n = 2; val = 5
    num = 10 -> 0000 1010 
    val = 5  -> 0000 0101
    2 bits from LSB of val is taken and replaced into the 2 bits (from LSB)of the num
    num = 10 -> 0000 1001  

    Sol:

 -->int get_nbits_from_pos(int num, int n, int pos);
    num = 10; n = 4; pos = 3
    10 -> 0000 1010 
    take 4 bits from 3rd postion -> 1000 and return decimal equiv -> 8

--> int replace_nbits_from_pos(int num, int n, int val,int pos);
    num = 10; n = 4; val = 5; pos = 3
    num = 10 -> 0000 1010 
    val = 5  -> 0000 0101
    4 bits from LSB of val is taken and replaced into the 4 bits (from 3rd position)of the num
    num = 10 ->0000 0101 and return decimal equiv -> 5  

    Step 1: Extract the n bits from val by creating a mask
    Step 2: Clear n bits from num by creating a mask
    Step 3: AND the num and val

--> int print_bits(unsigned int num, int n);
    print n number of bits from num from LSB 
    num = 10; n =12; 
    print last 12 bits from 10
    10 ->  0000 1010 
    print ->0000 1010 (10)
*/
#include <stdio.h>
#include <stdlib.h>

int get_nbits(int num, int n);
int replace_nbits(int num,int n,int val);
int get_nbits_from_pos(int num,int n,int pos);
int replace_nbits_from_pos(int num,int n,int pos,int val);
int toggle_bits_from_pos(int num, int n,int pos);
void print_nbits(int num, int n);

int get_nbits(int num, int n){
        //Step 1: Extract the n bits from num by creating a mask
        //Step 2: AND the num and mask

    int mask;
    mask = (1<< n)-1; 
    return (num & mask);
}

int replace_nbits(int num,int n,int val){
    // Step 1: Extract the n bits from val by creating a mask
    // Step 2: Clear n bits from num by creating a mask
    // Step 3: AND the num and val
    int mask = ((1<<n)-1);
    val = val & mask;

    num =  num & ~(mask);
    return (num | val);
}

int get_nbits_from_pos(int num,int n,int pos){
    //1. Extract the n bits from num by creating a mask
    //2. Move the n bits back to LSB 
    int mask = ((1<<n)-1)<<(pos-n+1);
    printf("mask is %d\n",mask);
    num = num & mask;
    num = num >> (pos-n+1);
    return(num);
}

int replace_nbits_from_pos(int num,int n,int pos,int val){
    //1. Extract the n bits from LSB of val by creating a mask
    //2. Clear the n bits from the num by creating a mask
    //3. Combine val and num => val | num 
    int mask = ((1<<n)-1);
    val = (val & mask) << (pos-n+1);

    int mask_new = mask<<(pos-n+1);
    num = num &(~mask_new);
    return(num | val);
}

int toggle_bits_from_pos(int num, int n,int pos){
    int mask = ((1<<n)-1) << (pos-n+1);
    return(num ^ mask); 
}

void print_nbits(int num, int n){
    printf("The bits for %d ->",num);
    for(int i=0; i<=12; i++){
        if((num >> (n-i)) & 1)
            printf("1 ");
        else
            printf("0 ");
    }
    printf("\n");
}

int main()
{
 /*--> int get_nbits(int num, int n)
    num = 10; n = 2
    10 -> 0000 0000  0000 0000  0000 0000  0000 1010 
    take 2 bits from LSB -> 10 and return decimal equiv -> 2
    */
   int choice,num,n,pos,val,value;
   char option;
   do{
    printf("select the operation from below list: \n \
    1. get_nbits\n \
    2. replace_nbits\n \
    3. get_nbits_from_pos\n \
    4. replace_nbits_from_pos\n \
    5. toggle_bits_from_pos\n \
    6. print_bits\n \
    Enter your choice: ");
   scanf("%d",&choice);

   switch(choice){
        case 1:
            printf("Enter the num:");
            scanf("%d\n",&num);
            printf("Enter the n:");
            scanf("%d\n",&n);

            value = get_nbits(num, n);
            printf("The value of %d bits of %d is %d\n",n,num,value);
            break;

        case 2:
            printf("Enter the num:");
            scanf("%d",&num);        
            printf("Enter the n:");
            scanf("%d",&n);
            printf("Enter the val:");
            scanf("%d",&val);

            value = replace_nbits(num, n,val);
            printf("The value of %d bits of %d is replaced by bits %d gives %d\n",n,num,val,value);
            break;        

        case 3:
            printf("Enter the num:");
            scanf("%d",&num);        
            printf("Enter the n:");
            scanf("%d",&n);
            printf("Enter the pos:");
            scanf("%d",&pos);

            value = get_nbits_from_pos(num, n,pos);
            printf("%d bits of %d from pos %d gives %d\n",n,num,pos,value);
            break;   

        case 4:
            printf("Enter the num:");
            scanf("%d",&num);        
            printf("Enter the n:");
            scanf("%d",&n);
            printf("Enter the pos:");
            scanf("%d",&pos);
            printf("Enter the val:");
            scanf("%d",&val);

            value = replace_nbits_from_pos(num, n,pos,val);
            printf("%d bits of %d from pos %d replaced by %d gives %d\n",n,num,pos,val,value);
            break;   

        case 5:
            printf("Enter the num:");
            scanf("%d",&num);        
            printf("Enter the n:");
            scanf("%d",&n);
            printf("Enter the pos:");
            scanf("%d",&pos);

            value = toggle_bits_from_pos(num,n,pos);
            printf("Toggling %d bits of %d from pos %d gives %d\n",n,num,pos,value);
            break; 

        case 6:
            printf("Enter the num:");
            scanf("%d",&num);        
            printf("Enter the n:");
            scanf("%d",&n);

            print_nbits(num,n);
            break; 

        default:
            printf("unknown choice!! Select a proper option!\n");
   }

   printf("Do you want to continue(y/Y):");
   scanf("%s",&option);
   }while(option == 'y' | option =='Y');
    
    return 0;    
}

/*----------------------------------------------------------------
Execution steps and Output:-


*/