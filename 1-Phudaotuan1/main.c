#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    if (a == 10){
        a += 2;
    }else if(a == 12){
        a = 8;
    }else{
        a = 5;
    }

    printf("\na = %d ", a);
    return 0;
}
