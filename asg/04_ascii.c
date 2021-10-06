/*
Name: Karuna R
Date:8/18/2021 
Descripion: To check perfect number
Input: NA
Output: To verify look for "man ascii" in any linux terminal
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t Dec \t Hex \t Octal \t Ascii\n");
    printf("\t --- \t --- \t ----- \t -----\n");
    for(int i=0;i<=127;i++)
    {
        if (i<=31 || i== 127){
            printf("\t %d \t %x \t %o \t Non-printable\n",i,i,i);
        }
        else{
            printf("\t %d \t %x \t %o \t %c\n",i,i,i,i);
        }
    }
    return 0;
}