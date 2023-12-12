#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Nhập vào ba số nguyên a,b,c
In ra nghiệm của phương trình aX^2 + bX +c = 0
*/
int main()
{
    float a;
    float b;
    float c;
    float x1,x2;
    float del;
    //Nhập vào hệ số:
    printf("\nNhap vao he so cua a: ");
    scanf("%f", &a);

    printf("\nNhap vao he so cua b: ");
    scanf("%f", &b);

    printf("\nNhap vao he so cua c: ");
    scanf("%f", &c);


    //TH1: với a=0 pt: bX + c = 0
    if(a == 0)
    {
        if(b == 0)
        {
            if(c == 0)
            {
                printf("\nPhuong trinh co vo so nghiem");
            }
            else
            {
                printf("\nPhuong trinh vo nghiem");
            }
        }
        else
        {
            printf("\nPhuong trinh co mot nghiem x = %.2f", -c/b);
        }
    }
    //TH2: a!=0 phuong trinh bac 2:
    del = sqrt(pow(b,2) - 4*a*c);

    if(a != 0)
    {
        if(del > 0)
        {
            printf("\nPhuong trinh co hai nghiem phan biet: x1 = %.2f, x2 = %.2f", (-b-del)/2*a, (-b+del)/2*a);
        }
        else if(del == 0)
        {
            printf("\nPhuong trinh co nghiem kep: x1 = x2 = %.2f", -b/2*a);
        }
        else
        {
            printf("\nPhuong trinh vo nghiem");
        }
    }





    return 0;
}
