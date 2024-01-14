#include <stdio.h>
#include <stdlib.h>

//Nhập vào một số nguyên dương n:
//Tính tổng các đơn vị số của n
//vd: 1234
//result = 10
//vd: 3254
//result = 14
//Hãy dùng \ và % 10
int main()
{
    int n;
    char ch;
    do{
      printf("\nInput n: ");
      scanf("%d", &n);
      scanf("%c", &ch);
      fflush(stdin);
    }while(ch != 10 || n < 0);//Nếu còn sai thì còn lặp

    int sum = 0;
    while( n != 0){
        sum += n % 10;
        n = n / 10;
    }
    printf("\nsum = %d", sum);



/*
    int tmp = n;
    int rye = 0;
    int sum = 0;
    do{
       rye = tmp % 10;
       sum += rye;
    }while(tmp /= 10);
    printf("\nTong cac chu so la: %d", sum);*/


    return 0;
}
