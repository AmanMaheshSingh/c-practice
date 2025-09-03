// #include <stdio.h>

// // int main()
// {
//     int i, j;
//     for (i = 1; i <= 4; i++)
//     {
//         char k = 'A';
//         for (j = 1; j <= 7; j++)
//         {
//             if (j <= 3 - i || j >= 3 + i)
//             {
//                 printf("%c", k);
//                 j < 4 ? k++ : k--;
//             }
//             else
//                 printf(" ");
//             if (j == 4)
//                 k--;
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n=4;
    
    for (int i = 0; i < n; i++)
    {

        char k = 'A';

        for (int j = 0; j < n * 2 - 1; j++)
        {
            if ((j <= n-1 - i) || (j >= n-1 + i))
            {

                printf("%c", k);
            }

            else
                printf(" ");

            if (j < n-1)

                k++;

            else

                k--;
        }
        printf("\n");
    }

    return 0;
}