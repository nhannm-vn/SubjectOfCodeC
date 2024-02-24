#include <stdio.h>
#include <stdlib.h>
/*
# Finding Array In Array

Viết hàm tìm mảng con trong mảng chính và in ra vị trí mảng
con trong mảng chính đó, nếu không in ra màn hình “Can not Found !”
Phần mềm cho phép nhập mảng chính và mảng con ( 8p )

Ví dụ

- Mảng Chính: 123123456
- Mảng Phụ: 1234
- Output: 3
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int arrInArr(int arr[], int size, int arrSub[], int sizeSub);
int main()
{
    int array[100];
    int size = 0;
    int arraySub[100];
    int sizeSub = 0;
    inputArray(array, &size);
    printf("\nMang ne: ");
    outputArray(array, size);

    inputArray(arraySub, &sizeSub);
    printf("\nMang ne: ");
    outputArray(arraySub, sizeSub);

    int tmp = arrInArr(array, size, arraySub, sizeSub);
    if(tmp == -1){
        printf("\nCan not Found !");
    }else{
        printf("\nVi tri ne: %d", tmp);
    }
    return 0;
}
int arrInArr(int arr[], int size, int arrSub[], int sizeSub){
    for(int i = 0; i <= size - 1; i++){
        if(arr[i] == arrSub[0]){
            for(int j = 0; j <= sizeSub - 1; j++){
                if(arr[i + j] != arrSub[j]){
                    break;
                }else{
                    if(j == sizeSub - 1){
                        return i;
                    }
                }
            }
        }
    }
    return -1;
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
