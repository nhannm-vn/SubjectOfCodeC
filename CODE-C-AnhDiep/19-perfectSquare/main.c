#include <stdio.h>
#include <stdlib.h>
//Số chính phương là số nếu
// căn 2 của một số được số nguyên thì đó là số chính phương

//Nhập vào 1 số nguyên (dương) n
//Kiểm tra xem n có phải chính phương hay không   // số 0 là số chính phương

//n=7 không phải
//0^2 1^2 2^2 3^2
//n=9 là số chính phương
//0^2 1^2 2^2 3^2
int main()
{
    //Ép số nguyên dương
    int number;
    char ch;
    do{
        printf("\nInput number: ");
        scanf("%d", &number);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || number < 0){
            printf("\nNhap lai di");
        }
    }while(ch != 10 || number < 0);//'n'

 /*   for(int i = 0; i <= sqrt(number); i++){
        if(i*i == number){
            printf("\nLa chinh phuong");
            return;
        }
    }
    printf("\nKhong la chinh phuong");
*/

    if(sqrt(number) ==  (int)sqrt(number)){//Can cua so do la so nguyen
        printf("\nLa chinh phuong");
    }else{
        printf("\nKhong la chinh phuong");
    }

/*
    float tmp;
    tmp = (float)sqrt(n);
    printf("%.2f", tmp);

    if(n == pow(tmp,2)){
        printf("\n%d la so chinh phuong", n);
    }else{
        printf("\n%d khong la so chinh phuong", n);
    }
*/

/*
    int sum = 0;
    int i = 0;
    do{
        sum = sum + pow(i,2);
       if(sum == n){
            printf("%d la so chinh phuong", n);
            return 0;
       }
            i++;
    }while(sum <= n);

    printf("%d khong la so chinh phuong", n);
*/


    return 0;
}
