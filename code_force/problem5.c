// Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

// Note : difference between 'a' and 'A' in ASCII is 32 .

#include<stdio.h>
    int main(){
        char n ;
        scanf("%c",&n);

        if(n >= 'a' && n <= 'z'){
            n = n - 32;
            printf("%c",n);
        }else{
            n = n + 32;
            printf("%c",n);
        }
        return 0;
    }