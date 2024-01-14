#include <stdio.h>
#include <stdlib.h>

//inputOutputArray
const int MAX =100;
//inputArray: hàm có nhiệm vụ nhập giá trị cho mảng
void inputArray(int array[], int* size);//int array[15] hàm chỉ chơi vs độ dài 15
//outputArray: viết hàm in ra các phân tử trong mảng
void outputArray(int array[], int size);//in ra không thay đổi nên k cần trỏ vì bản chất mảng là con trỏ
//sumElementInArray: tính tổng các phần tử
int sumElementInArray(int array[], int size);
int main()
{
    int arrMain[MAX];//tao ra 100 bien co ten arrMain
    int sizeMain = 0;//kich thuoc gia
    //nhập mảng
    inputArray(arrMain, &sizeMain);//do tính chất con trỏ nên k cần hoặc vuông arrMain[] (truyền tham chiếu)pass by reference

    printf("\nMang vua nhap ne: ");

    outputArray(arrMain, sizeMain);

    printf("\nTong element: %d", sumElementInArray(arrMain, sizeMain));
    return 0;
}
void inputArray(int array[], int* size){
    printf("\nNhap vao do dai ham: ");
    scanf("%d", size);//size = &sizeMain nên bỏ dấu & khi nhập
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap array[%d]: ", i);
        scanf("%d", &array[i]);
    }
}

void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", array[i]);
    }
}
/*
array: 2 8 7 9 7
i    : 0 1 2 3 4  size: 5
*/
int sumElementInArray(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        sum += array[i];
    }
    return sum;
}
/*
Nếu trong hàm là con trỏ:
value => *ten
Adress => ten
*/
