#include <stdio.h>

int fibonacchi (int);

int fibonacchi (int x) {
if (x==1 || x==2){
    return 1;
}
   return fibonacchi(x-1) + (x-2) ;
}

int main()
{
int e;
printf("Enter Which Element You Want to Know\n");
scanf("%d",&e);

int result = fibonacchi (e);
printf("%dth element of fibonacchi series is %d",e,result);
return 0;
}


/*#include <stdio.h>

int fibonacchi(int x) {
    if (x == 1 || x == 2) {
        return 1;
    }
    return fibonacchi(x - 1) + fibonacchi(x - 2);
}

int main() {
    int e;
    printf("Enter which element you want to know:\n");
    scanf("%d", &e);

    int result = fibonacchi(e);
    printf("The %dth element of the Fibonacci series is %d\n", e, result);

    return 0;
}*/
