#include <stdio.h>
#include <stdlib.h>
//Nhập số nguyên n. Tính n!
//Vd nhập n=5 1*2*3*4*5
int main()
{
    int n;
    printf("\Nhap vao so can tinh gia thua: ");
    scanf("%d", &n);

    long int gt = 1;
    for(int i = n; i >= 1; i--){
        gt *= i;
    }

    printf("\nGiai thua cua %d = %d", n, gt);

    return 0;
}
