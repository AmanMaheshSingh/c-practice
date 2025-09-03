#include <stdio.h>

int main()
{
    int m;
    printf("Entre The Number of Month\n");
    scanf("%d",&m);
    switch (m)
    {
    case 1:  case 3:  case 5:  case 7:  case 8: case 10:  case 12:
        printf("Month No %d Have 31 Days\n",m);
        break;

    case 2:
        printf("Month No %d Have 28 Days\n",m);
        break;
    
        case 4:  case 6:  case 9:  case 11:
            printf("Month No %d Have 30 Days\n",m);
            break;
    
    
    default:
        printf("Months Are only 12 Idiot JUST 1 TO 12");
        break;
    }

    return 0;
}
