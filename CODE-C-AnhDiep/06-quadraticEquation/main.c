#include <stdio.h>
#include <stdlib.h>
/*
Nhập vào ba số thực đại diện cho a,b,c
là hệ số của phương trình aX^2 + bX + c = 0
tìm nghiệm của phương trình trên
căn 5 của a => pow(a, (float)1/5)
*/
int main()
{
    float a;
    float b;
    float c;
    float del;
    printf("\nNhap vao he so a: ");
    scanf("%f", &a);

    printf("\nNhap vao he so cua b: ");
    scanf("%f", &b);

    printf("\nNhap vao he so cua c: ");
    scanf("%f", &c);

   if(a == 0){//bX + c = 0
        if(b == 0){//c=0
            if(c == 0){
                printf("\nPt vo so nghiem");
            }else{
                printf("\nPt vo nghiem");
            }
        }else{//bX + c = 0 va b != 0
            printf("\nPt co 1 nghiem %f", -c/b);
        }
   }else{//aX^2 + bX + c = 0
        float del = b*b - 4*a*c;
        if(del == 0){
            printf("\nPt co nghiem kep x1 = x2 = %f", -b/(2*a));
        }else if(del > 0){
            printf("\nX1 = %f", (-b + sqrt(del))/(2*a));
            printf("\nX2 = %f", (-b - sqrt(del))/(2*a));
        }else{
            printf("\nPt vo nghiem");
        }
   }



    /*if(a == 0){
        if(b == 0){
            if(c == 0){
                printf("\nPhuong trinh vo so nghiem");
            }else{
                printf("\nPhuong trinh vo nghiem");
            }
        }else{
            printf("\nPhuong trinh co mot nghiem x = %.f", -c/b);
        }
    }else{
        del = sqrt(pow(b,2) - 4*a*c);
        if(del > 0){
            printf("\nPhuong trinh co hai nghiem phan biet x1 = %f, x2 = %.f", (-b-del)/2*a, (-b+del)/2*a);
        }else if(del == 0){
            printf("\nPhuong trinh co nghiem kep x1 = x2 = %.f", -b/2*a);
        }else{
            printf("\nPhuong trinh vo nghiem");
        }
    }*/


    return 0;
}
