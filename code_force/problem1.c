// code force problem 1 
// Given two numbers A and B. Print "Yes" 
//if A is greater than or equal to B. Otherwise print "No".


#include<stdio.h>
    int main(){
        int a;
        int b;
        scanf("%d %d",&a,&b);

        if(a>=b){
            printf("Yes");
        }else{
            printf("No");
        }
        return 0;
    }