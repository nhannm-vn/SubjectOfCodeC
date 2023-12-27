#include <stdio.h>
#include <stdlib.h>
/*Bài 1: Nhập vào n nguyên dương. Đếm số lượng chữ số của n là số nguyên tố.

Đầu vào: 1222333999888 .Kết quả: 6
*/

int main()
{
    long int n = 0;
    char ch;
    do
    {
        printf("\nInput n > 0: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 0){
            printf("\nMoi nhap lai: ");
        }
    }while(ch != 10 || n < 0);

    int tmp = 0;
    int count = 0;
    while(n != 0){
        tmp = n % 10;
        if(tmp >= 2){
            int isPrime = 1;
            for(int i = 2; i <= tmp - 1; i++){
                if(tmp % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime){
                count++;
            }
        }

        n /= 10;
    }
    printf("\nCo tong cong %d so nguyen to", count);

    return 0;
}
