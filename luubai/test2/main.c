#include <stdio.h>
#include <stdlib.h>
/*
# Splice Array

Viết hàm cho phép nhận vào: vị trí cắt ( pos ), số lượng ( amount ), và mảng chính
Hàm xử lý mảng và cắt các phần tử theo yêu cầu và trả về mảng mới ( mảng các phần tử được cắt ) ( 10p )

Ví dụ

- Mảng Chính 123123123
- Pos: 3
- Amount: 4
- Output: Mảng mới ⇒  1231

( Lưu ý mảng chính không bị thay đổi )
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int splice(int array[], int *size, int pos, int amount);
int main()
{
    int array[100];
    int size = 0;
    int pos = 0;
    int amount = 0;
    inputArray(array, &size);
    printf("\nCac phan tu la: ");
    outputArray(array, size);

    printf("\nNhap vao pos: ");
    scanf("%d", &pos);

    printf("\nNhap vao amount: ");
    scanf("%d", &amount);

    int tmp = splice(array, &size, pos, amount);
    if(tmp == 0){
        printf("\nVi tri khong phu hop");
    }else{
        printf("\nMang sau xu li: ");
        outputArray(array, size);
    }
    return 0;
}
int splice(int array[], int *size, int pos, int amount){
    if(pos < 0 || pos > *size - 1){
        return 0;
    }
    for(int i = pos; i <= *size - 1; i++){
        array[i] = array[i + amount];
    }
    (*size) -= amount;
    return 1;
}
void inputArray(int array[], int *size){
    printf("\nNhap vao do lon: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\narray[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%d ", array[i]);
    }
}
