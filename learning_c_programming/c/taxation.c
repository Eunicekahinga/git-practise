#!/bin/bash
#calculate cost to cross the bridge
#include <stdio.h>
int main(){
    //DECLARE VARIABLES
    int dieOne;
    int dieTwo;
    int sum;
    int fee;
    //READ INPUT
    scanf("%d %d", &dieOne, &dieTwo);
    sum = dieOne + dieTwo;

    //CONDITION
    if (sum >= 10){
        fee = 36;
        printf("Special tax\n");
    } else {
        fee = 2 * sum;
        printf("Regular tax\n");
    }
    //PRINT THE SUM
    printf("%d", fee);

    return 0;
}
