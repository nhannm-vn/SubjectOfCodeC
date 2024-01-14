#include <stdio.h>
#include <stdlib.h>
//Viết hàm nhận vào n. Tính giai thừa

int factorial(int n);

int factorialV2(int n);


int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nNhap n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10){
            printf("\nInput again");
            printf("\n");
        }
    }while(ch != 10);

    int result = factorial(n);
    printf("\n%d", factorialV2(n));

    return 0;
}

int factorialV2(int n){
    if(n == 1 || n == 0) return 1;
    return n * factorialV2(n - 1);
}

int factorial(int n){
    int result = 1;
    for(int i = 1; i <= n; i++){
        result *= i;
    }
    return result;
}



