#include <stdio.h>
#include <stdlib.h>
//3.viết hàm nhận vào n, tính tổng các chữ số của n
int sumAllElement(int n);

int main()
{
    int n = 0;
    printf("\nInput n: ");
    scanf("%d", &n);

    printf("\nTong cac chu so: %d", sumAllElement(n));

    return 0;
}

int sumAllElement(int n){
    int sum = 0;
    int rye = 0;
    int tmp = n;
    while(tmp != 0){
        rye = tmp % 10;
        sum += rye;
        tmp /= 10;
    }
    return sum;
}
