#include <stdio.h>
#include <stdlib.h>
/*
# Delete Element In Array

Viết hàm cho phép nhận vào: phần tử cần xóa ( element )
số lượng ( amount ), chiều ( Dimension ) , và mảng chính
Hàm Xóa một số lượng các phần tử theo chiều mà người dùng nhập vào ! ( 15p )

Dimension ( Số nguyên ): 1 và -1

Ví dụ

- Mảng Chính 1323343323
    - Với Element: 3, Dimension 1, Amount 5
        - Output: 12423
    - Với Element: 3, Dimension -1, Amount 4
        - Output: 132342
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void deleElementByPos(int array[], int *size, int pos);
void deleElementInArr(int array[], int *size, int key, int amount, int dimension);
int main()
{
    int array[100];
    int size = 0;
    int key = 0;
    int amount = 0;
    int dimension = 0;
    inputArray(array, &size);
    printf("\nCac phan tu la: ");
    outputArray(array, size);

    printf("\nNhap vao phan tu can xoa: ");
    scanf("%d", &key);

    printf("\nNhap vao dimension: ");
    scanf("%d", &dimension);

    printf("\nNhap vao so luong: ");
    scanf("%d", &amount);

    deleElementInArr(array, &size, key, amount, dimension);
    printf("\nMang sau xu li: ");
    outputArray(array, size);
    return 0;
}
void deleElementInArr(int array[], int *size, int key, int amount, int dimension){
    if(dimension == 1){
        int count = 0;
        for(int i = 0; i <= *size - 1; i++){
            if(count == amount){
                return 0;
            }
            if(array[i] == key){
                deleElementByPos(array, size, i);
                i--;
                count++;
            }
        }
    }else{
        int count = 0;
        for(int i = *size - 1; i >= 0; i--){
            if(count == amount){
                return 1;
            }
            if(array[i] == key){
                deleElementByPos(array, size, i);
                count++;
            }
        }
    }
}
void deleElementByPos(int array[], int *size, int pos){
    for(int i = pos; i <= *size - 2; i++){
        array[i] = array[i + 1];
    }
    (*size)--;
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
