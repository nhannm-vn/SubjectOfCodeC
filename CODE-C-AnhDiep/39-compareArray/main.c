#include <stdio.h>
#include <stdlib.h>
//compareArray
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int compareArray(int arr1[], int size1, int arr2[], int size2);
int main()
{
    int arr1[100];
    int size1 = 0;
    int arr2[100];
    int size2 = 0;
    inputArray(arr1, &size1);
    printf("\nCac phan tu arr1: ");
    outputArray(arr1, size1);

    inputArray(arr2, &size2);
    printf("\nCac phan tu arr2: ");
    outputArray(arr2, size2);

    int tmp = compareArray(arr1, size1, arr2, size2);
    if(tmp == 1){
        printf("\narr1 > arr2");
    }else if(tmp == -1){
        printf("\narr1 < arr2");
    }else{
        printf("\narr1 = arr2");
    }

    return 0;
}
int compareArray(int arr1[], int size1, int arr2[], int size2){
    //tìm size nhỏ nhất trong size1 và size2 để chạy for
    //tránh trường hợp so sánh với rác
    int size = size1 < size2 ? size1 : size2;
    for(int i = 0; i <= size - 1; i++){//duyet mang co kich thuoc nho de so sanh
        if(arr1[i] > arr2[i]){
            return 1;
        }else if(arr1[i] < arr2[i]){
            return -1;
        }
    }
    //so sánh kích thước:
    if(size1 > size2){
        return 1;
    }else if(size1 < size2){
        return -1;
    }else{
        return 0;
    }


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
