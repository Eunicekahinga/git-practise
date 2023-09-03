#!/bin/bash
#using if else statements

#include <stdio.h>

int main() {
    // DECLARE INTEGERS
    int time;
    int basePrice = 10;
    int price;

    // READ THE INPUT
    scanf("%d", &time);

    // CALCULATE THE PRICE
    if (time == 0) {
        price = basePrice;
    } else {
        price = basePrice;  // Initialize price outside the loop
        for (int i = 0; i < time; i++) {
            price = price + 5;  // Add 5 to the price for each unit of time
            if (price > 53) {
                price = 53;  // Limit the price to a maximum of 53
            }
        }
    }

    printf("%d", price);
    return 0;
}

