#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
//43-deleteSubInArr//Làm hàm nhập mảng xuất mảng
void inputArr(int arr[], int *size);
void outputArr(int arr[], int size);
int splice(int arr[], int *size,
            int pos, int amount);
int arrInArr(int arr[], int size,
             int arrS[], int sizeS);
int arrInArrV2(int arr[], int size,
             int arrS[], int sizeS);
void delSubInArr(int arr[], int *size,
                 int arrS[], int sizeS);
void sort(int arr[], int size);
int main()
{
    int arr[] = {2,1,1,3,4,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int arrS[] = {1,3,4};
    int sizeS = sizeof(arrS) / sizeof(arrS[0]);
    //xài hàm------------------------
    //splice(arr, &size, 1, 4);
    int result = arrInArrV2(arr, size, arrS, sizeS);
    delSubInArr(arr, &size, arrS, sizeS);

    //sort(arr, size);
    //kết quả------------------------
    //printf("\nResult = %d", result);
    printf("\nArr: ");
    outputArr(arr, size);
    return 0;
}
void sort(int arr[], int size){
    for(int i = 0 ; i<= size - 2; i++){
        for(int j = i + 1; j <= size - 1; j++){
            if(arr[i] < arr[j]){
                //swap
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}
//con trỏ trong hàm
// giá trị => * tên
// địa chỉ => tên
void delSubInArr(int arr[], int *size,
                 int arrS[], int sizeS){
    while(splice(arr, size, arrInArrV2(arr, *size, arrS, sizeS), sizeS));
}
//arr : 2 1 1 3 4 3 4 5   size: 8
//      0 1 2 3 4 5 6 7

//arrS: 1 3 4 sizeS: 3
//      0 1 2

int arrInArrV2(int arr[], int size,
             int arrS[], int sizeS){
    int check = 0;
    for(int i = 0 ; i<= size -1; i++){
        if(arr[i] == arrS[check]){
            if(check == sizeS - 1) return i - check;
            check++;
        }else{
            i -= check;
            check = 0;
        }
    }
    return -1;
}
//arr : 2 1 3 1 3 4 3 4 5   size: 8
//      0 1 2 3 4 5 6 7

//arrS: 1 3 4 sizeS: 3
//      0 1 2
int arrInArr(int arr[], int size,
             int arrS[], int sizeS){
    for(int i = 0 ; i<= size -1; i++){//duyệt gốc
        //hỏi xem có pt nào bằng pt đầu của arrS ?
        if(arr[i] == arrS[0]){
            //nếu có thì so sánh đối xứng arrS từ đó
            for(int j = 0; j <= sizeS - 1; j++){//duyệt arrS
                if(arr[i+j] != arrS[j]) break;
                else{
                    if(j == sizeS - 1) return i;
                }
            }
        }
    }
    return -1;
}
//arr : 2 1 1 3 4 3 4 5   size: 8
//      0 1 2 3 4 5 6 7

//arrS: 1 3 4 sizeS: 3
//      0 1 2

int splice(int arr[], int *size,
            int pos, int amount){
    if(pos < 0 || pos > *size - 1) return 0;
    for(int i = pos ; i <= *size - 1; i++){
        arr[i] = arr[i + amount];
    }
    (*size)-= amount;
    return 1;
}
//  arr: 2 4 6 8 10   pos 1  amount: 2
//    i  0 1 2 3 4

void inputArr(int arr[], int *size){
    printf("\nNhap kich thuoc: ");
    scanf("%d", size);
    for(int i = 0 ; i<= *size - 1; i++){
        printf("\nArr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}
void outputArr(int arr[], int size){
    for(int i = 0 ; i<= size - 1; i++){
        printf("%5d", arr[i]);
    }
}
//*B4: xóa 1 mảng sub trong mảng arr
//  arrInArray

//  splice
//  f(arr, pos, amount);
//   trong mảng arr xóa từ pos số lượng amount pt
//  //hậu bối của bài delete
//  arr: 2 4 6 8 10   pos 1  amount: 2
//    i  0 1 2 3 4
