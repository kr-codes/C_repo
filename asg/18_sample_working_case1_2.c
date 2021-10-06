/*
Name: Karuna R
Date: 
Description: To check  
Input: 
Output: 

logic:-


 */
#include <stdio.h>
#include <stdlib.h>

double average(int element[],int *tot_int);

double average(int element[],int *tot_int){//element is a pointer to an array --> (*p)[i]
    int sum=0;
    for(int j = 0; j<(*tot_int); j++ ){
        sum += element[j];
    }
    printf("Sum is %d\n",sum);
    return ((double)sum/(*tot_int)) ;
}

int main(int argc,char *argv[])
{
    int choice,total_int;
    double avg;
    int elements[total_int];

    printf("select a method to calculate average \n"
    "1. Scan from Keyboard \n"
    "2. Proceed with provided command line arguments\n"
    "3. Proceed with environment variable arguments \n"
    "Enter your choice: ");
    scanf("%d",&choice);

    if (choice <= 0 | choice > 2) {printf("Invalid Input!!");return 1;}
    
    switch(choice){
        case 1:
                printf("Enter the total number of integers: ");
                scanf("%d",&total_int);

                printf("Enter the elements:");
                for(int i=0; i<total_int; i++){
                    scanf(" %d",&elements[i]);
                }
                printf("\n");
                avg = average(elements,&total_int);
                printf("The average of entered numbers: %0.2f\n",avg);
            break;
        case 2:
                total_int=argc-1;
                printf("Total int is :%d\n",total_int);
                for(int i=0; i<total_int; i++){
                    //everything on the CLI is treated as string so atoi is used
                    elements[i]=atoi(argv[i+1]);
                    printf("Elements is :%d\n",elements[i]);
                }
                avg = average(elements,&total_int);
                printf("The average of entered numbers: %0.3f\n",avg);
            break;
        default:
                printf("Invalid input!!\n");
                return 1;


    }
    return 0;    
}
