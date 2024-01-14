#include <stdio.h>
#include <stdlib.h>
//Nhập vào 3 số nguyên là a b c
//Kiểm tra xem a,bc có tạo thành tam giác không.
//Nếu có thì là tam giac gì
int main()
{
    int a;
    int b;
    int c;
    printf("\nNhap vao gia tri cua a:");
    scanf("%d", &a);

    printf("\nNhap vao gia tri cua b:");
    scanf("%d", &b);

    printf("\nNhap vao gia tri cua c:");
    scanf("%d", &c);

    //Nếu code chạy đến đây. Nghĩa là a, b, c đã có giá trị
    //Kiểm tra xem a,b,c có tạo thành tam giác không
    //Là tam giác
    if(a + b > c && b + c > a && a + c > b){
        //Xem là tam giác gì
        if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
            printf("\nTam giac vuong");
        }else if(a == b || b == c || a == c){
            if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
                printf("\nTam giac vuong can");
            }else if(a == b && b == c){
                printf("\nTam giac deu");
            }else{
                printf("\nTam giac can");
            }
        }else{
            printf("\nTam giac thuong");
        }
    }else{
        printf("\nKhong phai tam giac");
    }

    return 0;
}
