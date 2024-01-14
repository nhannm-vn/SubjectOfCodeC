#include <stdio.h>
#include <stdlib.h>
//Tạo project 08-workEvencount
//In ra màn hình các số chẵn trong đoạn
//Tính tổng các số lẻ trong đoạn
//Đếm xem có bao nhiêu số trong đoạn
//Đến xem có bao nhiêu số chẵn trong đoạn

int main()
{
    //Nhập vào dãy số:
    int start;
    int end;

    printf("Nhap vao so bat dau start: ");
    scanf("%d", &start);

    printf("Nhap vao so ket thuc end: ");
    scanf("%d", &end);

    //Tạo điều kiện để start < end
    int tmp;
    if(start > end){
       tmp = start;
       start = end;
       end = tmp;
    }

    //In ra các số chẵn trong dãy:
    printf("Cac so chan trong day la: ");
    for(int i = start; i <= end; i++){
        if(i % 2 == 0){
        printf("%d ", i);
       }
    }

    //Tính tổng các số lẻ có trong dãy:
    int tong = 0;
    for(int i = start; i <= end; i++){
        if(i % 2 != 0){
            tong = tong + i;
        }
    }
    printf("\nTong so le trong day la: ");
    printf("%d", tong);

    //Tính xem có bao nhiêu số trong dãy:
    tong = 0;
    for(int i = start; i <= end; i++){
        tong = tong + 1;
    }
    printf("\nCo tong cong %d so trong day", tong);

    //Tính xem có bao nhiêu số chẵn trong dãy:
    tong = 0;
    for(int i = start; i <= end; i++){
        if(i % 2 == 0){
            tong = tong + 1;
        }
    }
    printf("\nCo tong cong %d so chan trong day", tong);


    return 0;
}
