#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    printf("Nhap vao canh a: \n");
    scanf("%d", &a);

    printf("Nhap vao canh b: \n");
    scanf("%d", &b);

    printf("Nhap vao canh c: \n");
    scanf("%d", &c);

    //dieu kien:
    if(a+b > c && a+c > b && b+c > a)
    {
        //printf("Du dieu kien\n");
        if(a == b || b == c || a ==c)
        {
            if(a == b && b == c)
            {
                printf("\nTam giac deu");
            }
            else if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b)
            {
                printf("\nTam giac vuong can");
            }
            else
            {
                printf("\nTam giac can");
            }
        }
        else if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b)
        {
            printf("\nTam giac vuong");
        }
        else
        {
            printf("\nTam giac thuong");
        }
    }
    else
    {
        printf("Khong du dieu kien\n");
    }



    return 0;
}
