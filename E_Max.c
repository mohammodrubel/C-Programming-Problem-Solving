#include<stdio.h>
#include<limits.h>
    int main(){
        int n;
        scanf("%d",&n);
       
        int max= INT_MIN;
        for(int i = 0; i<n; i++){
            int value;
            scanf("%d",&value);

                if(value > max){
                    max = value;
                }
        }
        printf("%d\n",max);
        return 0;
    }
