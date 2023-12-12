#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Xài toán tử điều kiện cho bài even odd
    int a;
    printf("Nhap vao so can kiem tra: ");
    scanf("%d", &a);

    //a % 2 == 0 ? printf("\nEven number") : printf("\nOdd number");
    printf(a % 2 == 0 ? "\nEven number" : "\nOdd number");


    return 0;
}
