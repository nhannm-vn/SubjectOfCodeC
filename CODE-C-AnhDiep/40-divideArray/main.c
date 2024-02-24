#include <stdio.h>
#include <stdlib.h>
//tách mảng
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void divideArrayV1(int arrMain[], int *sizeMain, int arrSub[], int *sizeSub, int pos);
void divideArrayV2(int arrMain[], int sizeMain, int arrSub1[], int *sizeSub1, int arrSub2[], int *sizeSub2, int pos);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    int arrSub[100];
    int sizeSub = 0;
    int arrSub2[100];
    int sizeSub2 = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu trong mang: ");
    outputArray(arrMain, sizeMain);

    inputArray(arrSub, &sizeSub);
    printf("\nCac phan tu trong mang: ");
    outputArray(arrSub, sizeSub);

    inputArray(arrSub2, &sizeSub2);
    printf("\nCac phan tu trong mang: ");
    outputArray(arrSub2, sizeSub2);

    int pos = 0;
    printf("\nNhap vao pos: ");
    scanf("%d", &pos);

    divideArrayV2(arrMain, sizeMain, arrSub, &sizeSub, arrSub2, &sizeSub2, pos);
    printf("\nMang arrMain: ");
    outputArray(arrMain, sizeMain);
    printf("\nMang arrSub: ");
    outputArray(arrSub, sizeSub);
    printf("\nMang arrSub2: ");
    outputArray(arrSub2, sizeSub2);
/*
    int pos = 0;
    printf("\nNhap vao pos: ");
    scanf("%d", &pos);
    divideArrayV1(arrMain, &sizeMain, arrSub, &sizeSub, pos);

    printf("\nMang arrMain moi: ");
    outputArray(arrMain, sizeMain);

    printf("\nMang arrSub moi: ");
    outputArray(arrSub, sizeSub);
*/
    return 0;
}
void divideArrayV2(int arrMain[], int sizeMain, int arrSub1[], int *sizeSub1, int arrSub2[], int *sizeSub2, int pos){
    *sizeSub1 = 0;
    *sizeSub2 = 0;
    for(int i = 0; i <= pos - 1; i++){//nhét khúc đầu vào sub1
        arrSub1[*sizeSub1] = arrMain[i];
        (*sizeSub1)++;
    }
    for(int i = pos; i <= sizeMain - 1; i++){//nhét khúc sau vào sub2
        arrSub2[*sizeSub2] = arrMain[i];
        (*sizeSub2)++;
    }
}
void divideArrayV1(int arrMain[], int *sizeMain, int arrSub[], int *sizeSub, int pos){
    *sizeSub = 0;//xoa mang de luu phan bi cat
    for(int i = pos; i <= *sizeMain - 1; i++){
        arrSub[*sizeSub] = arrMain[i];
        (*sizeSub)++;
    }
    *sizeMain = pos;//hạ arrMain về vị trí bị cắt
}
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%d ", array[i]);
    }
}
void inputArray(int array[], int *size){
    printf("\nNhap vao do lon: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\narray[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
//40-divideArray
/*
tách, cắt mảng
divideArrayV1(arrMain, pos, arrSub)
cắt đôi nối phần sau sang arrSub, arrMain còn lại khúc trước

divideArray(arrMain, pos, arrSub1, arrSub2)
tách arrMain thành 2 khúc
khúc đầu cho arrSub1
khúc sau cho arrSub2
sau khi kết thúc arrMain không đổi
*/

/*

*/
