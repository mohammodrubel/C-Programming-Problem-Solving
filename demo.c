

#include<stdio.h>
    int main(){
        int n;
        int max= 0;
        for(int i = 0; i<=n; i++){
            int value;
            scanf("%d",&value);

                if(max <=value){
                    max = value;
                }
        }
        printf(max);


        return 0;
    }