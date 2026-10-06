// Problem 5 — Pass or Fail

// Write a C program that takes a student's marks as input.

// If marks are 40 or more → print Pass
// If marks are less than 40 → print Fail

#include <stdio.h>
    int main(){
        int n ;
        scanf("%d",&n);
            if(n >= 40){
                printf("pass");
            }else{
                printf("Fail");
            }

        return 0;
    }