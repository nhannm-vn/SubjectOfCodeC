#include <stdio.h>
#include <stdlib.h>
//03-evenOdd
/*
người dùng nhập từ bàn phím một số nguyên bất kì
kiểm tra chẵn lẻ
in ra màn hình và báo cáo
*/
int main()
{
    int number;
    printf("\nPlz, input a number: ");
    scanf("%d", &number);
    //code đến được đây, number đã có giá trị
    //printf("\nNumber ne: %d", number);
    //Kiểm tra xem giá trị của number là chẵn hay lẻ
    if(number % 2 == 0){
        printf("\n%d is even", number);
    }else{
        printf("\n%d is odd", number);
    }





    return 0;
}
