#include <stdio.h>
#include <stdlib.h>
//Nhập vào số nguyên n >= 2
//Tính tích các số chẵn và tích các số lẻ từ 1 dến n - 1

//vd: nhập n = 5
//tích các số chẵn 2 * 4
//tích các số lẻ 1 * 3
int main()
{
    int n = 0;
    char ch;
    int mulEven = 1, mulOdd = 1;
    int hasEven = 0, hasOdd = 0;

    //Ep nhap so nguyen >=2
    do{
        printf("\nMoi nhap n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 2){
            printf("\nSai roi. Moi nhap lai!");
        }
    }while(ch != 10 || n < 2);

    //process:
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            mulEven *= i;
            hasEven = 1;
        }else{
            mulOdd *= i;
            hasOdd = 1;
        }
    }
    //Xai nay thay if-else
    mulEven *= hasEven;
    mulOdd *= hasOdd;

    printf("\nmulEven = %d", mulEven);

    printf("\nmulOdd = %d", mulOdd);

/*
    int tichchan = 1;
    int tichle = 1;
    for(int i = 1; i <= n - 1; i++){
        if(i % 2 == 0){
            tichchan = tichchan * i;
        }else{
            tichle = tichle * i;
        }
    }
    printf("\nTich cac so chan: %d", tichchan);

    printf("\nTich cac so le: %d", tichle);

*/
    return 0;
}
