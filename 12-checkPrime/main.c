#include <stdio.h>
#include <stdlib.h>
/*
Nhap vao mot so nguyen number
Kiem tra xem so do co phai so nguyen to khong
So nguyen to  chi chia het cho 1 va chinh no
----
B1: Số nguyên tố là số từ 2 trở lên
B2: nếu mà number < 2 thì không phải số nguyên tố
còn nếu từ 2 trở lên thì (có thể) là số nguyên tố
---
số nguyên tố là số không chia hết cho số nào từ 2 đến tiệm cận của nó
*/

int main()
{
    //PHƯƠNG PHÁP XÀI COUNT
    /*
    int number;
    printf("\nNhap vao so can kiem tra ");
    scanf("%d", &number);

    int count = 0;
    if(number < 2){
        printf("\nKhong phai so nguyen to");
    }else{
        for(int i = 2; i < number; i++){
            if(number % i == 0){
                count++;
        }
    }
    }

    if(count == 0){
        printf("%d la so nguyen to", number);
    }else{
        printf("%d khong la so nguyen to", number);
    }
    */


    //PHƯƠNG PHÁP XÀI RETURN
    /*
    int number;
    printf("\nInput a number: ");
    scanf("%d", &number);


    if(number >= 2){
        //Kt tiếp
        //Chạy từ 2 đến tiệm cận của number
         for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                printf("\n%d is not prime", number);
                return 0;
            }
         }
         printf("\n%d is prime", number);
    }else{
         printf("\n%d is not prime", number);
    }
    */

    //PHƯƠNG PHÁP CẮM CỜ:(Flag)
    int n;
    printf("\nNhap vao so can kiem tra: ");
    scanf("%d", &n);

    int key = 0;
    for(int i = 2; i <= n - 1; i++){
        if(n % i == 0){
            key = 1;
            break;
        }
    }
    //Xài bitwise nhị phân
    //Nếu if = 0 sai nếu if = 1 đúng
    if(key){
        printf("\n%d khong la so nguyen to", n);
    }else{
        printf("\n%d la so nguyen to", n);
    }



    return 0;
}
