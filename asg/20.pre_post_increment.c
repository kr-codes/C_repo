/*
Name: Karuna R
Date: 
Description: WAF for pre and post increment and passing int pointer as a function parameter
without using arithmetic operator and only using bitwise

logic:-
    //if the number is odd then increment the last but 1th bit by 1
    // n = 5 -> 0101
    //     6 -> 0110

    //if the number is even directly add 1
    //n = 4 -> 0100
    //    5 -> 0101   
*/
#include<stdio.h>

int pre_increment(int *n){
    int m = 1;
    //if the number is odd then increment the last but 1th bit by 1
    while(m & *n){
        *n ^= 1;
         m <<= 1;
    }

    //if the number is even directly add 1
    *n |= m;
    return *n;
}

int post_increment(int *n){
    // post_increment num = 5++ num --> 5
    //                num --> 6
    int m = 1, original = *n;

    while(m & *n){
        *n ^= 1;
         m <<= 1;
    }
    *n |= m;
    return original;
}

int main(){
    int num = 0,i,choice;

    printf("Enter the num:");
    scanf("%d",&num);

    printf("1. Pre-increment\n"
           "2. Post-increment\n"
           "Enter you choice(1 or 2)?:");
    scanf("%d",&choice);

    switch (choice){
        case 1:
            i = pre_increment(&num);
            printf("i = %d\nnum = %d\n", i, num);
            break;
        case 2:
            i = post_increment(&num);
            printf("i = %d\nnum = %d\n", i, num);
            break;
        default:
            printf("Invalid selection!!\n");
            return 1;
    }
    return 0;
}

/*Usage
gcc 20.pre_post_increment.c
./a.out               
Enter the num:5
1. Pre-increment
2. Post-increment
Enter you choice(1 or 2)?:1
i = 6
num = 6

./a.out
Enter the num:3
1. Pre-increment
2. Post-increment
Enter you choice(1 or 2)?:2
i = 3
num = 7
*/