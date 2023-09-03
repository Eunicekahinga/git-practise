#!/bin/bash
#include <stdio.h>

int main() {
    // Declare variables
    int robotDeployed, height, weight, enginePower, resistance;
    int robotPower = 0; 
    scanf("%d", &robotDeployed);
    for (int i = 0; i < robotDeployed; i++){
        scanf("%d %d %d %d", &height, &weight, &enginePower, &resistance);
        robotPower = robotPower + (enginePower + resistance) * (weight - height);
    }
    
    printf("%d\n", robotPower);
    return 0;
}
