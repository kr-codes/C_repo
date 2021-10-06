/*
Name: Karuna R
Date: 07/08/2020
Description: To print “Hello” in X format
Input: any positive number withn the range
Output:To print “Hello” in X format
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int lines;
    printf("Enter a number of lines: ");
    scanf("%d",&lines);

    for(int rows=0; rows<lines; rows++){
        for(int cols=0; cols<lines; cols++){
            if((rows == cols) || rows==(lines-cols-1)){
                printf("X");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}