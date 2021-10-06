/*
Name: Karuna R
Date: 08/25/2021
Description: To find the day of the year
Input: Enter value b/w 1 to 365; and choose the first day of the year
Output: day of the week
*/

#include <stdio.h>

int main(){

    int day_number,first_day,result;
    char ch;

    do{
    printf("Enter the value of the day_number 'n':");
    scanf("%d",&day_number);
    if(day_number > 7 || day_number < 1){
        printf("Invalid input\n");
        return 1;
    }
    
    printf("Choose the First Day: \n"
            "1. Sunday\n"
            "2. Monday\n"
            "3. Tuesday\n"
            "4. Wednesday \n"
            "5. Thursday\n"
            "6. Friday\n"
            "7. Saturday\n");
    printf("Enter the option to set the first day:");
    scanf("%d",&first_day);
    if(first_day > 7 || first_day < 1){
        printf("Invalid input\n");
        return 1;
    }

    //logic statement for calculating the day of the week
    result = (day_number + first_day - 1) % 7;// Eg:=> 9+2-1 = 10%7 = 3 => Tuesday

    switch(result){
        case 1:
            printf("The %d th day is Sunday\n",day_number);
            break;
        case 2:
            printf("The %d th day is Monday\n",day_number);
            break;
        case 3:
            printf("The %d th day is Tuesday\n",day_number);
            break;
        case 4:
            printf("The %d th day is Wednesday\n",day_number);
            break;
        case 5:
            printf("The %d th day is Thursday\n",day_number);
            break;
        case 6:
            printf("The %d th day is Friday\n",day_number);
            break;
        case 7:
            printf("The %d th day is Saturday\n",day_number);
            break;
        default:
            printf("Invalid input try again!\n");
    }
    printf("Do you want to continue?(y/n):");
    scanf(" %c",&ch);
    }while(ch=='y');
    
    return 0;
}