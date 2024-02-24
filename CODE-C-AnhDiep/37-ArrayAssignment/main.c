#include <stdio.h>
#include <stdlib.h>
//37-ArrayAssignment
const int MAX = 100;
void inputArray(int array[], int *size);
void outputArray(int array[],int size);
void cpyArray(int arrS[], int *sizeS,
               int arrM[],int sizeM);//mảng s đi copy người ta nên bị thay đổi cần phải xài con trỏ
//hành động sao chép không tạo ra gì mới nên xài void

void cpyArrayV2(int arrS[], int *sizeS,
               int arrM[],int sizeM);
void concatArrayV2(int arrS[], int *sizeS,//hàm nối các phân tử trong mảng
                int arrM[],int sizeM);
int main()
{
    int arr1[100] = {3, 1, 2, 7, 5};//arrS
    int size1 = 5;
    int arr2[100] = {2, 6, 7};//arrM
    int size2 = 3;

    printf("\nArr1: ");
    outputArray(arr1, size1);

    printf("\nArr2: ");
    outputArray(arr2, size2);
    //xài hàm: arr1 copy arr2
    cpyArray(arr1, &size1, arr2, size2);
    //in kết quả
    printf("\nsau copy: ");
    printf("\nArr1: ");
    outputArray(arr1, size1);

    printf("\nArr2: ");
    outputArray(arr2, size2);
    //nhét mảng
    printf("\nSau khi nhet mang la: ");
    concatArrayV2(arr1, &size1, arr2, size2);
    printf("\nArr1: ");
    outputArray(arr1, size1);
    return 0;
}
void concatArrayV2(int arrS[], int *sizeS,
                int arrM[],int sizeM){//nối mảng
    for(int i = 0; i <= sizeM - 1; i++){
        arrS[*sizeS] = arrM[i];
        (*sizeS)++;
    }
}
void cpyArrayV2(int arrS[], int *sizeS,
                int arrM[],int sizeM){//bài này mà không xóa mảng muốn coppy thì sẽ thành bài nối mảng
//nhét để copy thì cần xóa mảng đi copy
    *sizeS = 0;//biến độ dài mảng đi cop thành trắng xóa
    for(int i = 0; i <= sizeM - 1; i++){//vì là coppy mảng m nên luôn phải lấy dộ dài của nó để trừ
        arrS[*sizeS] = arrM[i];//0 1 2 3 4
        (*sizeS)++;// tăng kích thước theo mảng cần copy0 1 2 3 4 5
    }
}
void cpyArray(int arrS[], int *sizeS,
               int arrM[], int sizeM){
    for(int i = 0; i <= sizeM - 1; i++){
        arrS[i] = arrM[i];
    }
    *sizeS = sizeM;// sau khi copy thì sao chép luôn độ dài của mảng
    //copy nó giúp in ra trên main y chang mảng copy
    //copy là phải y chang nhau hết
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
/*ArrayAssignment: gán mảng| dán mảng
cpyArray: sao chép mảng
//copy thì như nào
    a = 10;
    a = b; => a copy b//a là người đi copy, a thay đổi giá trị
                        b là người bị copy: không thay đổi giá trị
    arr2 copy arr1=> arr2 = arr1

concatArrayV2: nối mảng ==> đã xong
cpyV1/cpyV2: copy mảng ==> đã xong

concatV1: nối mảng. Hàm nhận vào mảng 1 mảng 2 và mảng 3 và
có 3 kích thước. Sau xử lí mảng 1 không đổi, mảng 2 không đổi
mảng 3 là mảng 1 cộng mảng 2
+b1: xóa mảng 3
+b2: nhét mảng 1 vào 3
+b3: nhét mảng 2 vào 3
==> hàm ver2: nhận vào nối liên tiếp không bị gì cả
==> hàm ver1: nhận vào 2 mảng kia không bị gì mảng 3 nối của 2 mảng kia

reverseArray: đảo ngược mảng
+hàm nhận vào một mảng duy nhất sau xử lí mảng đó bị đảo ngược
c1: nhét
c2: swap đối xứng

dán đối xứng | nhét | swap đối xứng | duyệt ngược
*/
