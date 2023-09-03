#!/bin/bash
//calculate cost of cement for a building
#include <stdio.h>
#include <math.h>
int main(){
    //DECLARE VARIABLES
    int oneBag = 120;
    int cost = 45;
    double cement;
    double totalCost;
    
    
    //READ INPUT
    scanf("%lf", &cement);
    
    //ROUND UP TO THE NEAREST MULTIPLE
    double roundCement = ceil(cement/oneBag) * oneBag;
    
    //CALCULATE THE COST AND CONVERT
    totalCost = roundCement * cost/oneBag;
    
    int intotalCost = (int) totalCost;
    
    //PRINT THE COST
    printf("%d", intotalCost);
    
    return 0;
}
