#include <stdio.h>
#include <stdlib.h>

void checkPrimeV1(void);

int main()
{
    checkPrimeV1();

    return 0;
}

void checkPrimeV1(void){
    int n = 0;
    char ch;
    do{
        printf("\nInput n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10){
            printf("\nInput again!");
            printf("\n");
        }
    }while(ch != 10);
    int isPrime = 1;
    if(n >= 2){
        for(int i = 2; i <= n - 1; i++){
            if(n % i == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
            printf("\nLa so nguyen to do");
        }else{
            printf("\nKhong la so nguyen to dau");
        }
    }else{
        printf("\nKhong la so nguyen to dau");
    }
}
