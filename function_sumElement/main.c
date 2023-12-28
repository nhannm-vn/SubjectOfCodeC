#include <stdio.h>
#include <stdlib.h>
/*
3.viết hàm nhận vào n, tính tổng các chữ số của n
*/

int sumElement(int n);

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

    int tmp = sumElement(n);

    printf("\nTong cac chu so la: %d", tmp);

    return 0;
}

int sumElement(int n){
    int rye = 0;
    int tmp = n;
    int sum = 0;
    while(tmp != 0){
        rye = tmp % 10;
        sum += rye;
        tmp /= 10;
    }
    return sum;
}
