#include <stdio.h>
#include <stdlib.h>
//checkPrimeV4: tinh solid cao

int checkPrimeV4(int number);

int main()
{
    int number = 0;
    printf("\nInput number: ");
    scanf("%d", &number);

    if(checkPrimeV4(number)){
        printf("\n%d is Prime", number);
    }else{
        printf("\n%d is not Prime", number);
    }

    return 0;
}

int checkPrimeV4(int number){//number = 3 moi vao for
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                return 0;
            }
        }
        return number >= 2;//number > 1
}
