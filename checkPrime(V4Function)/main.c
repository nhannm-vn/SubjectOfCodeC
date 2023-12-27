#include <stdio.h>
#include <stdlib.h>

int checkPrimeV4(int number);

int main()
{
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

    int tmp = checkPrimeV4(n);

    if(tmp == 1){
        printf("\nLa so nguyen to do");
    }else{
        printf("\nKhong la so nguyen to dau");
    }



    return 0;
}

int checkPrimeV4(int number){
    int isPrime = 1;
    if(number >= 2){
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
            return 1;
        }else{
            return 0;
        }
    }else{
        return 0;
    }
}
