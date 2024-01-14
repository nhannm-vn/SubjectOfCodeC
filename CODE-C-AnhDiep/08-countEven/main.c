#include <stdio.h>
#include <stdlib.h>
//Nhập vào hai số nguyên lần lượt là start và end
//in ra màn hình các số trong đoạn từ start đến n
//Mô tả: nhập start: -2/nhập end 6

int main()
{
    int start;
    int end;

    printf("\nNhap vao gt start: ");
    scanf("%d", &start);

    printf("\nNhap vao gt end: ");
    scanf("%d", &end);


    if(start > end){//Nhập cà chớn
        int tmp = 0;
        tmp =  start;
        start = end;
        end = tmp;
    }
    for(int i = start; i <= end; i++){
        printf("%d\t", i);
    }
//%5d: có 5 khoảng trống

//Tính tổng các số có trong đoạn trên:
    int sum = 0;
    for(int i = start; i <= end; i++){
        sum += i;
    }
    printf("\nGia tri cua dong lap");
    printf("\n%d", sum);

//Tạo project 08-workEvencount
//In ra màn hình các số chẵn trong đoạn
//Tính tổng các số lẻ trong đoạn
//Đếm xem có bao nhiêu số trong đoạn
//Đến xem có bao nhiêu số chẵn trong đoạn

    return 0;
}
