#include <stdio.h>
#include <stdlib.h>
/*
2.viết hàm nhờ người dùng nhập vào 1 số
kiểm tra xem số đó có phải là số chẵn không ?
nếu là chẵn thì ném ra 1, không thì phải ném ra 0
*/
int isEven(void);

int main()
{
    if(isEven()){
        printf("\nLa so chan");
    }else{
        printf("\nKhong la so chan");
    }

    return 0;
}

int isEven(void){
    int number = 0;
    printf("\nInput number: ");
    scanf("%d", &number);

    return number % 2 == 0;
    /*
    if(number % 2 == 0){
        return 1;
    }else{
        return 0;
    }
    */
}
