#include <stdio.h>
#include <stdlib.h>
/*Nhap vao ba so
Kiem tra xem co phai tam giac hay khong
Kiem tra xem do la tam giac gi
*/
int main()
{
    int a;
    int b;
    int c;
    printf("Input vao gia tri cua a: ");
    scanf("%d", &a);

    printf("Input vao gia tri cua b: ");
    scanf("%d", &b);

    printf("Input vao gia tri cua c: ");
    scanf("%d", &c);

    if(a+b > c && a+c > b || b+c > a)
    {
        printf("\nDu dieu kien thanh tam giac");
        if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
        {
            printf("\nDay la tam giac vuong");
        }
        else if(a == b || a == c || b == c)
        {
            if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
            {
                printf("\nDay la tam giac vuong can");
                return;
            }
            else if(a == b && b == c)
            {
                printf("\nDay la tam giac deu");
                return;
            }
            printf("\nDay la tam giac can");
        }
        else
        {
            printf("\nDay la tam giac thuong");
        }
    }
    else
    {
        printf("\nKhong du dieu kien tao thanh tam giac");
    }

    return 0;
}
