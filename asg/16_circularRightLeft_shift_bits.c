/*
Name: Karuna R
Date: 
Description: To Left or Right shift the num n times either to Left or Right  
Input: 
Output: 

logic:-


 */
#include <stdio.h>
#include <stdlib.h>

circular_right_shift(int num,int n);
circular_left_shift(int num,int n);

int main()
{
    int num,n,choice;
    char rotation_side;
    printf("Enter the number num: ");
    scanf("%d",num);
    printf("Enter the n times value n: ");
    scanf("%d",n);
    printf("Options are:\n"
            "1. Circular Right Shift\n"
            "2. Circular Left Shift\n"
            "Enter your choice: ");
    scanf("%d",choice);

    if (choice == 1)
        circular_right_shift(num,n);
    else if (choice == 2)
        circular_right_shift(num,n);
    else
        printf("Invalid input!!\n");

    return 0;    
}

circular_right_shift(int num,int n){

}

circular_left_shift(int num,int n){
    
}

/*----------------------------------------------------------------
Execution steps and Output:-


*/