#include <stdio.h>
#include <stdlib.h>
/*
4.viết hàm nhận vào n, tính n giai thừa
*/

int factorial(int n);

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nInput n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 1){
            printf("\nInput again!");
            printf("\n");
        }
    }while(ch != 10 || n < 1);

    int tmp = factorial(n);

    printf("\nGiai thua cua %d: %d ", n, tmp);
    return 0;
}

int factorial(int n){
    int mul = 1;
    for(int i = 1; i <= n; i++){
        mul *= i;
    }
    return mul;
}
