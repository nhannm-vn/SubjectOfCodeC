#include <stdio.h>
#include <stdlib.h>

//17-sumPrime


int main()
{
    int start;
    int end;

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
    //Gia dinh start = 1 end = 5
    //printf("\nCac so nguyen to la: ");
    int sum = 0;
    for(int number = start; number <= end; number++){
        int isPrime = 1;//reset niem tin
        if(number >= 2){
            for(int i = 2; i <= number - 1; i++){
                if(number % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){
                //printf("%5d", number);
                sum += number;
            }
        }
    }
    printf("\nTong cac so nguyen to: %d", sum);

    return 0;
}
