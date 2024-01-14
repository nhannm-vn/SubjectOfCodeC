#include <stdio.h>
#include <stdlib.h>
/*
1. viết hàm nhận vào start và end
tính tổng các phần tử trong đoạn
dùng hàm có kết quả in ra màn hình

*/
int sumAll(int start, int end);

int main()
{
    int start = 0;
    int end = 0;
    printf("\nInput start: ");
    scanf("%d", &start);

    printf("\nInput end: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = 0;
        tmp = start;
        start = end;
        end = tmp;
    }
    printf("\nTong: %d", sumAll(start, end));

    return 0;
}

int sumAll(int start, int end){
    int sum = 0;
    for(int i = start; i <= end; i++){
        sum += i;
    }
    return sum;
}
