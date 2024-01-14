#include <stdio.h>
#include <stdlib.h>
//Check prime V3:

int checkPrime(void);

int main()
{
    int tmp = checkPrime();//call
    if(tmp){
        printf("\nLa so nguyen to do");
    }else{
        printf("\nKhong la so nguyen to dau");
    }

    return 0;
}

int checkPrime(void){
    int number = 0;
    printf("\nInput number: ");
    scanf("%d", &number);

    //int isPrime = 1;
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
