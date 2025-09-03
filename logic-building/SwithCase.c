// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter How Many Odd Number You Want to know\n");
//     scanf("%d",&n);
//     switch(n+1){
//         case 1 :
//         case 3 :
//         printf("31 DAYS");
//         break;
//         default:
//         printf("D");
//         break;
//     }

//     return 0;
// }

#include<stdio.h>
void main()
{
    switch(2)
    {
    case 1L:
        printf("No");

    case 2L:
        printf("%s","GEEKS");
        goto Love;

    case 3L:
        printf("Please");

    case 4L:Love:
        printf("FOR");
    }
}