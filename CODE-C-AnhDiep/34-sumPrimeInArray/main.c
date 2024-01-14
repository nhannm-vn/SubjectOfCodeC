#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
//sumPrimeInArray: tính tổng các số nguyên tố trong mảng
int isPrime(int number);//Ham kiem tra so nguyen to
int sumPrimeInArray(int array[], int size);
int main()
{
    int arrMain[MAX];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: \n");
    outputArray(arrMain, sizeMain);
    printf("\nTong cac so nguyen to: %d", sumPrimeInArray(arrMain, sizeMain));
    return 0;
}
int sumPrimeInArray(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        if(isPrime(array[i])){//Nếu là số nguyên tố thì ra số 1 thì làm if
            sum += array[i];
        }
    }
    return sum;
}
int isPrime(int number){
    if(number >= 2){
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                return 0;
            }
        }
        return 1;
    }else{
        return 0;
    }

}
void inputArray(int array[], int *size){
    printf("\nNhap do lon: ");
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
