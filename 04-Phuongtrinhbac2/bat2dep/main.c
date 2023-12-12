#include <stdio.h>
#include <stdlib.h>
//Nhập vào ba hệ số nguyên a,b,c
//In ra nghiệm của phương trình bậc 2: aX^2 + bX + c = 0

int main()
{
    //Khai báo biến của phương trình:
    float a;
    float b;
    float c;
    float del;

    //Nhập vào lần lượt hệ số của a,b,c:
    printf("\nNhap vao he so a: ");
    scanf("%f", &a);

    printf("\nNhap vao he so b: ");
    scanf("%f", &b);

    printf("\nNhap vao he so c: ");
    scanf("%f", &c);

    //Xử lí logic bài toán:
    //TH1: a=0: bX + c = 0
    //TH2: a!=0 : aX^2 + bX + c = 0

    //TH1: a=0: bX + c = 0
    if(a == 0)
    {
        if(b == 0 && c != 0)
        {
            printf("\nPhuong trinh vo nghiem");
        }
        else if(b == 0 && c == 0)
        {
            printf("\nPhuong trinh vo so nghiem");
        }
        else if(b != 0)
        {
            printf("\nPhuong trinh co 1 nghiem x = %.2f", -c/b);
        }
    }
    else
    {
        //TH2: a!=0 : aX^2 + bX + c = 0
        del = sqrt(pow(b,2)-4*a*c);
        if(del > 0)
        {
            printf("\nPhuong trinh co 2 nghiem phan biet x1 = %f, x2 = %.2f", (-b-del)/2*a,(-b+del)/2*a);
        }
        else if(del == 0)
        {
            printf("\nPhuong trinh co nghiem kep x1 = x2 = %.2f", -b/2*a);
        }
        else
        {
            printf("\nPhuong trinh vo nghiem");
        }
    }






    //Kết thúc chương trình
    return 0;
}
