#include <stdio.h>
#include <stdlib.h>
/*
Nhập vào start và end
In ra mang hình các số prime trong đoạn

*/
int main()
{
    int start;
    int end;
    printf("\nInput start: ");
    scanf("%d", &start);

    printf("\nInput end: ");
    scanf("%d", &end);

    if(start > end){
        int tmp;
        tmp = start;
        start = end;
        end = tmp;
    }
    //Giả định start = 1, end = 5

    printf("\nCac so nguyen to trong khoang tu start den end la: ");
    for(int number = start; number <= end; number++){
        int isprime = 1;//Trước khi bắt đầu phải khởi tạo lại isprime
        if(number >= 2){
            for(int i = 2; i <= number - 1; i++){//Không in trong dòng này do đang thử
               if(number % i == 0){
                isprime = 0;
                break;//Dừng vòng for gần nhất
               }
            }
            if(isprime == 1){
            printf("%d ", number);
            }
        }
    }


    return 0;
}
