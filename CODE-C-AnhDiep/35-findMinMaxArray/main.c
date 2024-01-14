#include <stdio.h>
#include <stdlib.h>
//35-findMinMaxArray
/*
1. tìm tích lớn nhất của hai số bất kì trong mảng
2. tìm tổng lớn nhất của dãy con liên tiếp trong mảng
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int findMinInArray(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac gia tri mang: ");
    outputArray(arrMain, sizeMain);
    printf("\nMin mang la: %d", findMinInArray(arrMain, sizeMain));
    return 0;
}
int findMinInArray(int array[], int size){
    int min = array[0];
    for(int i = 0; i <= size - 1; i++){
        if(array[i] < min){//nếu có anh nào bé hơn mình
            min = array[i];//thì mình tin anh ấy
        }
    }
    return min;
}
void inputArray(int array[], int *size){
    printf("\nNhap do lon: ");
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
