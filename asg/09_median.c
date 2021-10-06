/*
Name: Karuna R
Date: 07/08/2020
Description: To print “Hello” in X format
Input: any positive number withn the range
Output:To print “Hello” in X format
*/

#include <stdio.h>

int main(){
    int arrayA_size,mid_value;
    float median;

    printf("enter the n value for array A:");
    scanf(" %d", &arrayA_size);

    float array_A[40]={0};
    printf("Enter the elements one by one for array A: ");
    for(int count_a = 0; count_a < arrayA_size; count_a++){
        scanf("%f",&array_A[count_a]);
    }
    printf("\n");

    //Sorting the array: check for the larger array and swap in ascending
    int loop_size = arrayA_size - 1;
    int temp = 0;
    for (int i=0; i < loop_size; i++){
        for (int j=0; j < loop_size; j++){
            if (array_A[j] > array_A[j+1]){
                temp = array_A[j];
                array_A[j] = array_A[j+1];
                array_A[j+1]=temp;
            }
        }
    }

    printf("After sorting:");
    for(int count_ap = 0; count_ap < arrayA_size; count_ap++){ 
        printf(" %0.0f",array_A[count_ap]);
    }
    printf("\n");
  
    mid_value = arrayA_size/2;
    if((arrayA_size % 2) == 0){
        median = (array_A[mid_value]+array_A[mid_value-1])/2;
    }
    else{
        median = array_A[mid_value];
    }

    printf("Median of array: %0.1f\n",median);
    return 0;
}