#include <stdio.h>
#include <stdlib.h>
//36-tìm tích sủa 2 số lớn nhất bất kì trong
//mảng
void inputArray(int array[], int *size);
void outputArray(int aray[], int size);
int getHighestMul2NumbArray(int array[], int size);

int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu trong mang: ");
    outputArray(arrMain, sizeMain);
    int result = getHighestMul2NumbArray(arrMain, sizeMain);
    printf("\nTich hai so lon nhat trong mang la: %d", result);
    return 0;
}
int getHighestMul2NumbArray(int array[], int size){
    int max = array[0] * array[1];//Giả định
    for(int i = 0; i <= size - 2; i++){
        for(int j = i + 1; j <= size - 1; j++){
            if(max < array[i] * array[j]){
                max = array[i] * array[j];
            }
        }
    }
    return max;
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
