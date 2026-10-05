// Problem 2 — Find the Bigger Number

// Write a C program that takes two integers a and b.

// Print:

// a is bigger if a > b
// b is bigger if b > a
// Both are equal if a == b
// Input:
// 10 20

// Output:
// 20 is bigger

// Example 2:

// Input:
// 50 30

// Output:
// 50 is bigger

// Example 3:

// Input:
// 25 25

// Output:
// Both are equal

#include <stdio.h>
    int main(){
        int a;
        int b;
        scanf("%d",&a);
        scanf("%d",&b);

       if(a > b){
        printf("%d is bigger",a);
       }else if(a < b){
        printf("%d is bigger",b);
       }else{
        printf("%d both are equal",a);
       }

       return 0;
    }