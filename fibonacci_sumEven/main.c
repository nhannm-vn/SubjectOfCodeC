#include <stdio.h>
#include <stdlib.h>
/*
6.viết hàm nhận vào n, tính tổng các số chẳn từ 1 đến n
*/

int sumEven(int n);

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
            printf("\nInput again");
            printf("\n");
        }
    }while(ch != 10);

    int tmp = sumEven(n);
    printf("\nTong cac so chan la: %d", tmp);

    return 0;
}

int sumEven(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            sum += i;
        }
    }
    return sum;
}
