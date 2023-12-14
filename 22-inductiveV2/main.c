#include <stdio.h>
#include <stdlib.h>

//22-inductiveV2
//nhập vào 1 số nguyên dương n >= 1
//tính tổng của phép tính

//1 + 1/2 + 1/3 + ... + 1/(1+2+3...+n)

int main()
{
    int n;
    //Đk n >= 1:

    do{
        printf("\nInput n: ");
        scanf("%d", &n);
    }while(n < 1);

    //Sum 1 + 1/2 + 1/3 + ... + 1/(1+2+3...+n)

    int sum = 0;
    float tong = 0;

    for(int i = 1; i <= n; i++){
        sum += i;
        tong += (float)1/sum;
    }
    printf("\nTong cua day so la: %f", tong);



    return 0;
}
