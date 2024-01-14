#include <stdio.h>
#include <stdlib.h>
/*
sumArray
*/
const int MAX = 100;//HANG SO
//MAX = 10--bug
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
//tinh trung binh cong:
float avgInArray(int array[], int size);
//tính tổng các phân tử có giá trị là chẵn
int sumEvenInArray(int array[], int size);
//sumIndexEvenInArray: tính tổng các phân tử có vị trí chẵn
int sumIndexEvenInArray(int array[], int size);
int main()
{
    int arrMain[MAX];//tạo ra 100 biến
    int sizeMain = 0;//lưu kích thước người dùng muốn xài
    //inputArray
    //outputArray
    inputArray(arrMain, &sizeMain);
    printf("\nCac gia tri mang: \n");
    outputArray(arrMain, sizeMain);
    printf("\nTrung binh cong: %f", avgInArray(arrMain, sizeMain));
    printf("\nTong cac phan tu chan: %d", sumEvenInArray(arrMain, sizeMain));
    printf("\nTong cac phan tu o vi tri chan: %d", sumIndexEvenInArray(arrMain, sizeMain));
    return 0;
}

int sumIndexEvenInArray(int array[], int size){
    int sumIndex = 0;
    for(int i = 0; i <= size - 1; i++){
        if(i % 2 == 0){
            sumIndex += array[i];
        }
    }
    return sumIndex;
}
int sumEvenInArray(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        if(array[i] % 2 == 0){
            sum += array[i];
        }
    }
    return sum;
}
float avgInArray(int array[], int size){
    int sum = 0;
    //duyệt mảng từ đầu tới cuối mảng: 0 --> size - 1
    for(int i = 0; i <= size - 1; i++){
        sum += array[i];
    }
    return (float)sum/size;
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
