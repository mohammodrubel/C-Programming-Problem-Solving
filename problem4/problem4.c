// Problem 4 — Positive Even / Positive Odd

// Now make the problem a little harder.

// Take one integer n.

// Print:

// If n is positive and even → Positive Even
// If n is positive and odd → Positive Odd
// If n is negative → Negative
// If n is zero → Zero
#include <stdio.h>
    int main(){
        int n ;
        scanf("%d",&n);
        // printf("%d ",n);
            if(n < 0){
                printf("Negative");
            }else if(n == 0){
                printf("Zero");
            }else if(n % 2 == 0){
                printf("Positive Even");
            }else if(n % 2 == 1){
                printf("Positive Odd");
            }
        return 0;
    }