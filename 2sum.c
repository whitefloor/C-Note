//
// Created by Admin on 2023/9/21.
//
#include <stdio.h>

int main(){
    int integer1,integer2,sum;
    printf("Please enter the first integer:");
    scanf("%d",&integer1);
    printf("Please enter the second integer:");
    scanf("%d",&integer2);

    sum = integer1+integer2;
    printf("Sum is %d.\n",sum);

    return 0;
}