#include <stdio.h>
#include <stdlib.h>
//Kiem tra so nguyen co phai so nguyen to khong
//check Prime V1: Khong vao khong ra
//git clone + paste down ve
void checkPrimeV1(void);//Khai bao ham

int main()
{
    //c1: return
    //c2: isPrime + break

    checkPrimeV1();

    return 0;
}

void checkPrimeV1(void){//build
    int number = 0;
    printf("\nInput number: ");
    scanf("%d", &number);

    if(number >= 2){
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                printf("\nKhong la so nguyen to");
                return 0;
            }
        }
        printf("\la so nguyen to");
    }else{
        printf("\nKhong la so nguyen to");
    }
}
