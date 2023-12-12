#include <stdio.h>
#include <stdlib.h>

int main()
{

//In ra màn hình các số chẵn trong đoạn
//Tính tổng các số lẻ trong đoạn
//Đếm xem có bao nhiêu số trong đoạn
//Đến xem có bao nhiêu số chẵn trong đoạn

    int start;
    int end;
    printf("\NHAP START: ");
    scanf("%d", &start);

    printf("\NHAP END: ");
    scanf("%d", &end);

    if(start > end){
    int tmp;
    tmp = start;
    start = end;
    end = tmp;
    }

    for(int i = start; i <= end; i++){
        if(i % 2 == 0){
           printf("%d ", i);
        }
    }

    printf("\n");
    int sumOdd = 0;
    for(int i = start; i <= end; i++){
        if(i % 2 != 0){
           printf("%d ", i);
           sumOdd += i;
        }
    }

    printf("\nTong cac so le: %d", sumOdd);

    int count = 0;

    for(int i = start; i <= end; i++){
        count += 1;
    }
    printf("\nCac so co trong dong lap la: %d", count);

    count = 0;
    for(int i = start; i <= end; i++){
        if(i % 2 == 0){
           count += 1;
        }
    }

    printf("\nCo %d so chan trong day", count);


    return 0;
}
