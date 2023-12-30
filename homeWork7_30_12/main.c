#include <stdio.h>
#include <stdlib.h>
//7.viết hàm xin người dùng n,
//in ra màn hình các số lẽ trong khoảng từ 1 đến n

void countOdd(void);

int main()
{
    countOdd();

    return 0;
}

void countOdd(void){
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

    printf("\nCac so le la: ");
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            printf("%d ", i);
        }
    }
}
