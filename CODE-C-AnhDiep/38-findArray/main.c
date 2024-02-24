#include <stdio.h>
#include <stdlib.h>
//38-findArray
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int findFirstIndex(int array[], int size, int key);

void findListIndex(int array[], int size, int key, int arrayR[], int *sizeR);
int main()
{
    int array[100] = {9,6,1,2,3,6,5,6};
    int size = 8;
    //xài hàm findFirstIndex
    /*int pos = findFirstIndex(array, size, 6);//position
    if(pos == -1){
        printf("\nKhong tim thay");
    }else{
        printf("\nTim thay o vi tri %d", pos);
    }
    */
    //xai ham:
    int arrayR[100] = {1, 2, 3, 4, 5, 6, 7};
    int sizeR = 7;

    findListIndex(array, size, 6, arrayR, &sizeR);
    if(sizeR == 0){
        printf("\nKhong tim thay");
    }else{
        printf("\nNhung vi tri xuat hien la: ");
        outputArray(arrayR, sizeR);
    }


    return 0;
}
//38-findArray
/*
find first index: tìm vị trí đầu tiên của key trong mảng
    hàm nhận vào một mảng array, nhận thêm key
    tìm vị trí đầu tiên phát hiện key
find list index: tìm các vị trí xuất hiện key trong mảng
    nhận vào một mảng array và key và một mảng arrayR
    tìm các vị trí xuất hiện key và lưu vào arrayR
*/
void findListIndex(int array[], int size, int key, int arrayR[], int *sizeR){
    //duyệt mảng, đi qua từng phần tử
    *sizeR = 0;//xoa mang luu ket qua
    for(int i = 0; i <= size - 1; i++){
        if(array[i] == key){
            arrayR[*sizeR] = i;
            (*sizeR)++;
        }
    }
}
int findFirstIndex(int array[], int size, int key){
    //duyet mang: di qua tung thang
    for(int i = 0; i <= size - 1; i++){
        if(array[i] == key){//neu co thang nao bang key
            return i;//lap tuc k tim nua nem ra luon
        }
    }
    //xuống tới đây
    return -1;// tìm như chó mà không có
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
