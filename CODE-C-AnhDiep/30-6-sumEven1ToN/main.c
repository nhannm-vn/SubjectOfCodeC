#include <stdio.h>
#include <stdlib.h>

int sumEven(int n);

int main()
{
    int n = 0;
    printf("\nNhap n: ");
    scanf("%d", &n);

    printf("\nTong Even Number: %d", sumEven(n));

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
