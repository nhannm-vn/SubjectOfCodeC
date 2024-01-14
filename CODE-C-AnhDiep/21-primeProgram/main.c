#include <stdio.h>
#include <stdlib.h>

//21-primeProgram

int main()
{
    int number = 0;
    char buffer;

    while(1 == 1){

        do{//Ep nhap so nguyen
            printf("\nMoi nhap so: ");
            scanf("%d", &number);
            scanf("%c", &buffer);
            fflush(stdin);
            if(buffer != 10){
                printf("\nKhong biet nhap so nguyen ha");
                printf("\n");
            }
        }while(buffer != 10);

        //Dieu kien thoat
        if(number == 0) return 0;//Neu xai break thi bo ngoai do-while
        //Neu chay toi day thi number la so nguyen

        //Kiem tra so nguyen to(isPrime)
        int isPrime = 1;
        if(number >= 2){
            for(int i = 2; i <= number - 1; i++){
                if(number % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){
                printf("\nLa so nguyen to!");
            }else{
                printf("\nKhong la nguyen to!");
            }
        }else{
            printf("\nKhong la nguyen to");
        }

    }





    return 0;
}
