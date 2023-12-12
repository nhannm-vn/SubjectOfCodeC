#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5;
    int b = 2;
    if(++b > 3 || a == 4 ){
        a = 7;
        b = 9;
    }

    printf("\na = %d \nb = %d", a, b);

   /* int a = 2;

    a = a++ + ++a + a;

    printf("%d", a);

    */
    return 0;
}
