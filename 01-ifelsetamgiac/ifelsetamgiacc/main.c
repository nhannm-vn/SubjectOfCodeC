#include <stdio.h>
#include <stdlib.h>
/*
Nhap vao 3 số nguyên lần lượt a,b,c
Giả sử đó là độ dài của ba cạnh tam giác
_Require1: Kiểm tra xem có là tam giác hay không
_Require2: Kiểm tra xem đó là dạng tam giác gì: đều, vuông, cân, thường

*/
int main()
{
    int a;
    int b;
    int c;
    //Nhập vào độ dài của cạnh a:
    printf("Input value a: ");
    scanf("%d", &a);
    //Nhập vào độ dài cạnh b:
    printf("\nInput value b: ");
    scanf("%d",&b);
    //Nhập vào độ dài của cạnh c:
    printf("\nInput value c: ");
    scanf("%d", &c);
    //Điều kiện tạo thành tam giác
    if(a+b > c || a+c > b || b+c > a){
        printf("\nDu dieu kien");
        if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
            printf("\nTam giac vuong");
        }else if((a == b || b == c || a == c) && (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)){
            printf("\mDay la tam giac vuong can");
        }else if(a == b && b == c){
            printf("\nTam giac deu");
        }else if(a == b || b == c || a == c){
            printf("\nTam giac can");
        }else{
            printf("\nTam giac thuong");
        }
    }else{
        printf("\nKhong du dieu kien");
    }



    return 0;
}
