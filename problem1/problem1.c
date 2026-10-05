// Problem 1 — Positive, Negative or Zero

// Write a C program that takes an integer n as input.

// Check the number:

// If n is greater than 0, print Positive
// If n is less than 0, print Negative
// If n is equal to 0, print Zero


#include <stdio.h>
    int main(){
        int n;
        scanf("%d",&n);

        if(n > 0){
            printf("Positive");
        }else if(n < 0){
            printf("Negative");
        }else if(n == 0){
            printf("Zero");
        }
        
    }