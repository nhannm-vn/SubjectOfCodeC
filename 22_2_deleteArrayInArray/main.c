#include <stdio.h>
#include <stdlib.h>
//Xóa hết mảng con trong mảng cha
//arr: 2 1 1 3 5 1 3 5 7
//sub: 1 3 5
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int findArrayInArray(int arrMain[], int sizeMain, int arrSub[], int sizeSub);
void deleteElementByPos(int array[], int *size, int pos);
int splice(int array[], int *size, int pos, int amount);
void deleteArrayInArray(int arrMain[], int *sizeMain, int arrSub[], int sizeSub);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    int arrSub[100];
    int sizeSub = 0;

    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu arrMain: ");
    outputArray(arrMain, sizeMain);

    inputArray(arrSub, &sizeSub);
    printf("\nCac phan tu arrSub: ");
    outputArray(arrSub, sizeSub);

    deleteArrayInArray(arrMain, &sizeMain, arrSub, sizeSub);
    printf("\nMang arrMain sau khi xoa: ");
    outputArray(arrMain, sizeMain);
    return 0;
}
void deleteArrayInArray(int arrMain[], int *sizeMain, int arrSub[], int sizeSub){
    int pos = findArrayInArray(arrMain, *sizeMain, arrSub, sizeSub);
    do{
        splice(arrMain, sizeMain, pos, sizeSub);
        pos = findArrayInArray(arrMain, *sizeMain, arrSub, sizeSub);
    }while(pos != -1);
}
int splice(int array[], int *size, int pos, int amount){
    if(pos < 0 || pos > *size - 1) return 0;
    for(int i = 1; i <= amount; i++){
        deleteElementByPos(array, size, pos);
    }
    return 1;
}
void deleteElementByPos(int array[], int *size, int pos){
    for(int i = pos; i <= *size - 2; i++){
        array[i] = array[i+1];
    }
    (*size)--;
}
int findArrayInArray(int arrMain[], int sizeMain, int arrSub[], int sizeSub){
    for(int i = 0; i <= sizeMain - 1; i++){
        if(arrMain[i] == arrSub[0]){
            for(int j = 0; j <= sizeSub - 1; j++){
                if(arrMain[i+j] != arrSub[j]){
                    break;
                }else{
                    if(j == sizeSub - 1){
                        return i;
                    }
                }
            }
        }
    }
    return -1;
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
