#include <stdio.h>
#include <stdlib.h>

//29-countPrime
//Nhập vào start va end trong đoạn đó số nào là số nguyên tố thì in ra
//thì đếm
//thì tính tổng

//Nếu đề bài là tính thì khác void
//bai 1 đầu ra int
int isPrime(int number);

int main()
{
    int start = 0;
    int end = 0;
    printf("\nInput start: ");
    scanf("%d", &start);

    printf("\nInput end: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = 0;
        tmp = start;
        start = end;
        end = tmp;
    }
    int count = 0;
    int sum = 0;
    printf("\nCac so nguyen to la: ");
    for(int number = start; number <= end; number++){
        //Kiem tra number co phai la so nguyen to hay khong
        if(isPrime(number)){
            printf("%d ", number);
            count++;
            sum += number;
        }
    }
    printf("\ntong: %d\nso luong: %d", sum, count);

    return 0;
}

int isPrime(int number){
    if(number >= 2){
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                return 0;
            }
        }
        return 1;
    }
    return 0;
}
