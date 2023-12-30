#include <stdio.h>
#include <stdlib.h>
/*
8.hàm nhận vào start và end
tính trung bình nhân của các số từ start đến end
*/

float tbMul(int start, int end);

int main()
{
    int start = 0;
    int end = 0;
    printf("\nInput start: ");
    scanf("%d", &start);

    printf("\nInput end: ");
    scanf("%d", &end);

    if(start > end){
        int thu = 0;
        thu = start;
        start = end;
        end = thu;
    }
    float tmp = tbMul(start, end);
    printf("\nTrung binh nhan tu %d den %d la: %f", start, end, tmp);

    return 0;
}

float tbMul(int start, int end){
    int mul = 1;
    int count = 0;
    for(int i = start; i <= end; i++){
        mul *= i;
        count++;
    }
    return pow(mul,(float)1/count);
}
