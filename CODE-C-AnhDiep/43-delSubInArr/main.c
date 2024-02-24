#include <stdio.h>
#include <stdlib.h>
//43-delSubInArr
void inputArray(int array[], int *size);
void outputArray(int array[], int size);

int splice(int array[], int *size, int pos, int amount);

int arrInArr(int arr[], int size, int arrS[], int sizeS);
int arrInArrV2(int arr[], int size, int arrS[], int sizeS);

int delSubInArr(int array[], int *size, int sub[], int sizeSub);

int sort(int array[], int size);
int main()
{
    int array[100];
    int size = 0;
    int arrayS[100];
    int sizeS = 0;
    inputArray(array, &size);
    printf("\nMang ne array: ");
    outputArray(array, size);

    inputArray(arrayS, &sizeS);
    printf("\nMang ne arrayS: ");
    outputArray(arrayS, sizeS);
    //xài hàm
    /*int pos = 0;
    int amount = 0;
    printf("\nNhap vao pos: ");
    scanf("%d", &pos);
    printf("\nNhap vao amount: ");
    scanf("%d", &amount);*/
    //splice(array, &size, pos, amount);

    /*
    int result = arrInArrV2(array, size, arrayS, sizeS);
    if(result == -1){
        printf("\nKhong tim thay");
    }else{
        printf("\nVi tri tim thay: %d", result);
    }
    */
    //delSubInArr(array, &size, arrayS, sizeS);
    sort(array, size);
    //In kết quả
    printf("\nMang sau xu li: ");
    outputArray(array, size);

    return 0;
}//phía trên là main
int sort(int array[], int size){
    for(int i = 0; i <= size - 2; i++){
        for(int j = i+1; j <= size - 1; j++){
            if(array[i] > array[j]){
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}

int delSubInArr(int array[], int *size, int sub[], int sizeSub){
    while(1 == 1){
        int pos = arrInArr(array, *size, sub, sizeSub);
        if(pos != -1){
            splice(array, size, pos, sizeSub);
        }else{
            return 1;
        }
    }
    /*
    while(splice(array, size, arrInArr(array, *size, sub, sizeSub), sizeSub);
    */
}

int arrInArrV2(int arr[], int size, int arrS[], int sizeS){
    int check = 0;
    for(int i = 0; i <= size - 1; i++){
        if(arr[i] == arrS[check]){//nếu bằng nhau thì cùng nhau tăng
            if(check == sizeS - 1){
                return i - check;
            }
            check++;
        }else{//back về ban đầu
            i -= check;
            check = 0;
        }
    }
    return -1;
}

int arrInArr(int arr[], int size, int arrS[], int sizeS){
    for(int i = 0; i <= size - 1; i++){
        if(arr[i] == arrS[0]){
            for(int j = 0; j <= sizeS - 1; j++){
                if(arr[i+j] != arrS[j]){
                    break;
                }else{
                    if(j == sizeS - 1){//bằng nhau ở vị trí cuối cùng và là cặp cuối cùng
                        return i;
                    }
                }
            }
        }
    }
    return -1;
}



int splice(int array[], int *size, int pos, int amount){
    if(pos < 0 || pos > *size - 1){
        return 0;
    }
    for(int i = pos; i <= *size - 1; i++){
        array[i] = array[i + amount];
    }
    (*size) -= amount;
    return 1;
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
