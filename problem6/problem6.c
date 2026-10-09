// Problem 06: Find the Largest of Three Numbers

// Difficulty: Easy

// Write a C program that takes three integers as input and prints the largest number among them.

// Example Input

// 10 25 15

// Example Output

// Largest = 25

#include<stdio.h>
    int main(){
        int a;
        int b;
        int c;
        scanf("%d %d %d", &a, &b, &c);
        if(a > b && a > c ){
            printf("Largest = %d", a);
        }else if (b > a && b > c){
            printf("Largest = %d", b);
        }else if(c > a && c > b){
            printf("Largest = %d", c);
        }
       

        return 0;
    }