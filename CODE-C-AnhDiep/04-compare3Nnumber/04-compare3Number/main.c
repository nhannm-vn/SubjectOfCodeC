#include <stdio.h>
#include <stdlib.h>
/*compare3Nnumber
//Nhap tu bàn phím 3 số nguyên a, b, c
//Xuất ra màn hình tên biến có giá trị lớn nhất
//Mô tả phần mềm:
nhap a: 10
nhap b: 20
nhap c: 30
c la so lon nhat
a lon nhat (a > b && a > c)
b lon nhat (b > a && b > c)
c lon nhat (c > a && c > b)
a, b lon nhat (a > c && a == b)
b, c lon nhat (c > a) && b == c)
a, c lon nhat (c > b) && a == c)
a, b, c lon nhat(a == b && b == c)

*/

/*
Nhập vào ba số nguyên lần lượt a,b,c
giả sử đó là ba cạnh, kiểm tra xem ba cạnh có tạo thành tam giác không
. Đó là tam giác gì. Đều, cân, vuông, thường, vuông cân

*/
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    printf("\nNhap so a: ");
    scanf("%d", &a);

    printf("\nNhap so b: ");
    scanf("%d", &b);

    printf("\nNhap so c: ");
    scanf("%d", &c);

    if(a > b && a > c){
        printf("\na is max");
    }else if(b > a && b > c){
        printf("\nb is max");
    }else if(c > a && c > b){
        printf("\nc is max");
    }else if(a > b && a == c){
        printf("\na and c are max");
    }else if(a > c && a == b){
        printf("\na and b are max");
    }else if(b > a && b == c){
        printf("\nb and c are max");
    }else{
        printf("\na = b = c");
    }

    return 0;
}
