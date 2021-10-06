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
#include <string.h>

double average(int element[],int *tot_int);

double average(int element[],int *tot_int){//element is a pointer to an array --> (*p)[i]
    int sum=0;
    for(int j = 0; j<(*tot_int); j++ ){
        sum += element[j];
    }
    printf("Sum is %d\n",sum);
    return ((double)sum/(*tot_int)) ;
}

int main(int argc,char *argv[],char **envp)
{
    int choice,total_int;
    double avg;


    printf("select a method to calculate average \n"
    "1. Scan from Keyboard \n"
    "2. Proceed with provided command line arguments\n"
    "3. Proceed with environment variable arguments \n"
    "Enter your choice: ");
    scanf("%d",&choice);

    if (choice <= 0 | choice > 3) {printf("Invalid choice!!");return 1;}
    
    switch(choice){
        case 3:{                
                //char * getenv (const char *name)
                char *elements = getenv("arr");
                printf("arr is:%s\n",(elements!=NULL)? elements : "getenv returned NULL");
                printf("Length of arr:%lu\n",strlen(elements));
                total_int = strlen(elements); 
                if(elements != NULL){
                   printf("String to int:%d\n",atoi(elements)); 
                }
                else{
                    //avg = average(elements,&total_int);
                }

                //printf("Average is: %f\n",avg);
                break;
            }
        default:
                printf("Invalid input!!\n");
                return 1;
    }
    return 0;    
}

