// Write a C program that takes one integer.

// Check whether the number is:

// Even → print Even
// Odd → print Odd

#include <stdio.h>
    int main(){
        int n;
        scanf("%d",&n);
            if(n % 2 == 0){
                printf("%d output Even: \n",n);
            }else{
                printf("%d output Odd: \n",n);
            }
        return 0;
    }