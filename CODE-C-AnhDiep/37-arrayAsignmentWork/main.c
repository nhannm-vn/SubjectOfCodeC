#include <stdio.h>
#include <stdlib.h>
//37-arrayAssignmentWork
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void concatArrayV1(int arr1[], int size1,
                    int arr2[], int size2,
                    int arr3[], int *size3);
void reverseArray(int array[], int size);
void reverseArrayV2(int array[], int size);
int main()
{
    int arr1[100] = {1,3,5,7};
    int size1 = 4;
    int arr2[100] = {2,4,6};
    int size2 = 3;
    int arr3[100] = {5,5,5,5,5};
    int size3 = 5;
    //in ra
    printf("\nMang 1 ne: ");
    outputArray(arr1, size1);
    printf("\nMang 2 ne: ");
    outputArray(arr2, size2);
    printf("\nMang 3 ne: ");
    outputArray(arr3, size3);
    //xai ham concat
    concatArrayV1(arr1, size1, arr2, size2, arr3, &size3);
    //in ra xem ket qua
    printf("\nSau khi noi: ");
    printf("\nMang 1 ne: ");
    outputArray(arr1, size1);
    printf("\nMang 2 ne: ");
    outputArray(arr2, size2);
    printf("\nMang 3 ne: ");
    outputArray(arr3, size3);

    //xài reverseArray
    reverseArray(arr3, size3);
    printf("\nSau dao nguoc la: ");
    outputArray(arr3, size3);
    //xai reverseArrayV2


    return 0;
}
//37-arrayAssignmentWork
/*
concatArrayV1: nối mảng
hàm nhận vào 3 mảng, mảng 1, mảng 2, mảng 3
sau khi xử lí mảng 1 và mảng 2 không đổi. Mảng
3 sẽ trở thành mảng 1+mảng 2

reverseArray: đảo ngược
hàm nhận vào một mảng array, đảo ngược các phần tử trong mảng

c1: nhét
c2: swap
0 1 2 3 4 size: 5
*/
void reverseArrayV2(int array[], int size){
    //đi nửa vòng for
    for(int i = 0; i <= (size/2) - 1; i++){
        int tmp = array[i];//swap
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = tmp;
    }
}
void reverseArray(int array[], int size){
    int arrayTmp[100];//tạo ra mảng tạm không có gì trong đó
    int sizeTmp = 0;
    //Nhét array vào arrayTmp theo chiều ngược
    for(int i = size - 1; i >= 0; i--){
        arrayTmp[sizeTmp] = array[i];
        sizeTmp++;
    }
    //sao chép arrayTmp vào array
    for(int i = 0; i <= sizeTmp - 1; i++){//sao chép đối xứng do cùng kích thước
        array[i] = arrayTmp[i];
    }//không sao chép kích thước vì nó đã giống nhau rồi
}
void concatArrayV1(int arr1[], int size1,
                    int arr2[], int size2,
                    int arr3[], int *size3){
    *size3 = 0;//xoa mang3 dùng để lưu kết quả
    //nhet mang1 vao mang 3
    for(int i = 0; i <= size1 - 1; i++){
        arr3[*size3] = arr1[i];
        (*size3)++;
    }
    for(int i = 0; i <= size2 - 1; i++){//nhét mang2 vào mảng3
        arr3[*size3] = arr2[i];
        (*size3)++;
    }

}//tren nay la main
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
