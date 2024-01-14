#include <stdio.h>
#include <stdlib.h>
//checkPrime V2:

void checkPrimeV2(int number);

int main()
{
    int number = 0;
    printf("\nInput number: ");
    scanf("%d", &number);
    checkPrimeV2(number);
    return 0;
}

void checkPrimeV2(int number){
    if(number >= 2){
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                printf("\nKhong la so nguyen to");
                return;
            }
        }
        printf("\nLa so nguyen to");
    }else{
        printf("\nKhong la so nguyen to");
    }
}
