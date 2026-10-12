

#include<stdio.h>
    int main(){
        int password;
        while (scanf("%d",&password))
        {
            if(password == 1999){
                printf("Correct\n");
                break;
            }else{
                printf("Wrong\n");
            }
        }

        return 0;
    }

// #include <stdio.h>
// int main()
// {
//     int password;
//     for (;;)
//     {
//         if (password == 1999)
//         {
//             printf("Correct\n");
//             break;
//         }
//         else
//         {
//             printf("Wrong\n");
//         }
//     }
// }
