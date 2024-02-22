#include <stdio.h>
#include <stdlib.h>
//*B4: xóa 1 mảng sub trong mảng arr
//  arrInArray
//  splice
//  f(arr, pos, amount);
//   trong mảng arr xóa từ pos số lượng amount pt
//  //hậu bối của bài delete
//  arr: 2 4 6 8 10   pos 1  amount: 2
//    i  0 1 2 3 4
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void deleteElementByPos(int array[], int *size, int pos);
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
        printf("\nVi tri khong hop li");
    }else{
        printf("\nMang sau khi xoa la: ");
        outputArray(array, size);
    }
    return 0;
}
void deleteElementByPos(int array[], int *size, int pos){
    for(int i = pos; i <= *size - 2; i++){
        array[i] = array[i + 1];
    }
    (*size)--;
}
int splice(int array[], int *size, int pos, int amount){
    if(pos < 0 || pos > *size - 1){
        return 0;
    }
    for(int i = 1; i <= amount; i++){
        deleteElementByPos(array, size, pos);
    }
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
