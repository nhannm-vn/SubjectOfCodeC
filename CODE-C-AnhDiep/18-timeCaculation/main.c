#include <stdio.h>
#include <stdlib.h>

//18-tmineCaculation

int main()
{
    int s = 0;
    int m = 0;
    int h = 0;

    printf("\nInput so giay can quy doi: ");
    scanf("%d", &s);//4700

    h = s / 3600;//h = 4600 / 3600 = 1

    s = s % 3600;//s = 4600 % 3600 = 1100

    m = s / 60; //m = 1100 / 60 = 18

    s = s % 60; //s = 1100 % 60 = 20

    printf("\n%02d:%02d:%02d", h, m, s);



    return 0;
}
