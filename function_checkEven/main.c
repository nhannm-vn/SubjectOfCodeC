#include <stdio.h>
#include <stdlib.h>
/*
2.viết hàm nhờ người dùng nhập vào 1 số
kiểm tra xem số đó có phải là số chẵn không ?
nếu là chẵn thì ném ra 1, không thì phải ném ra 0
*/

int checkEven(void);

int main()
{
    int tmp = checkEven();
    if(tmp){
        printf("\nLa so chan");
    }else{
        printf("\nKhong la so chan");
    }

    return 0;
}

int checkEven(void){
    int number = 0;
    char ch;
    do{
        printf("\nInput number: ");
        scanf("%d", &number);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10){
            printf("\nInput again ");
            printf("\n");
        }
    }while(ch != 10);

    if(number % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}
