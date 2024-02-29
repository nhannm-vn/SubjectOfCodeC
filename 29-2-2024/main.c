#include <stdio.h>
#include <stdlib.h>
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int arrInArr(int arrMain[], int sizeMain, int arrSub[], int sizeSub);
int splice(int array[], int *size, int pos, int amount);
void delSubInArr(int arrMain[], int *sizeMain, int arrSub[], int sizeSub);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    int arrSub[100];
    int sizeSub = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);
    inputArray(arrSub, &sizeSub);
    printf("\nCac phan tu la: ");
    outputArray(arrSub, sizeSub);
    delSubInArr(arrMain, &sizeMain, arrSub, sizeSub);


    printf("\nCac phan tu sau xu li: ");
    outputArray(arrMain, sizeMain);
    return 0;
}
void delSubInArr(int arrMain[], int *sizeMain, int arrSub[], int sizeSub){
    //while(arrInArr(arrMain, *sizeMain, arrSub, sizeSub) != -1){
    //    splice(arrMain, sizeMain, arrInArr(arrMain, *sizeMain, arrSub, sizeSub), sizeSub);
    //}
    while(splice(arrMain, sizeMain, arrInArr(arrMain, *sizeMain, arrSub, sizeSub), sizeSub));
}
int splice(int array[], int *size, int pos, int amount){
    if(pos < 0 || pos > *size - 1){
        return 0;
    }
    for(int i = pos; i <= *size - 1; i++){
        array[i] = array[i + amount];//1 2 3 4 5 6 7
    }
    *size -= amount;
    return -1;
}
int arrInArr(int arrMain[], int sizeMain, int arrSub[], int sizeSub){
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
