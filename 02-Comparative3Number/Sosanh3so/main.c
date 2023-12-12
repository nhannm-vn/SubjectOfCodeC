#include <stdio.h>
#include <stdlib.h>
/*Compare 3 number
//Nhập từ bàn phím 3 số nguyên a, b, c
//Xuất ra màn hình tên biến có giá trị lớn nhất
//Mô tả phần mềm:
*/
int main()
{
    int number1;
    int number2;
    int number3;
    //input number1
    printf("\nInput number1: ");
    scanf("%d", &number1);

    //input number2
    printf("\nInput number2: ");
    scanf("%d", &number2);

    //input number3
    printf("\nInput number3: ");
    scanf("%d", &number3);

    //So sánh 3 số:
    if(number1 > number2 && number1 > number3){
        printf("\n%d is max number", number1);
    }else if(number2 > number1 && number2 > number3){
        printf("\n%d is max number", number2);
    }else if(number3 > number2 && number3 > number1){
        printf("\n%d is max number", number3);
    }else if(number1 == number2 && number1 > number3){
        printf("\n%d and %d are max number", number1, number2);
    }else if(number1 == number3 && number1 > number2){
        printf("\n%d and %d are max number", number1, number3);
    }else if(number2 == number3 && number2 > number1){
        printf("\n%d and %d are max number", number2, number3);
    }else{
        printf("\n%d is max number", number1);
    }




    return 0;
}
