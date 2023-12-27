#include <stdio.h>
#include <stdlib.h>
/*
Bài 4: số đảo ngược

Đầu vào: 123456. kết quả: 654321

*/
int main()
{
    int number = 0;
    char ch;
    do
    {
        printf("\nInput number: ");
        scanf("%d", &number);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || number < 1){
            printf("\nMoi nhap lai !!");
        }
    }while(ch != 10 || number < 1);

    int tmp = 0;
    printf("\nSo dao nguoc la: ");
    while(number != 0){
        tmp = number % 10;
        printf("%d", tmp);
        number /= 10;
    }

    return 0;
}
