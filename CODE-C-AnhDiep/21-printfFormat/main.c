#include <stdio.h>
#include <stdlib.h>
//Nhập vào 1 kí tự thuộc alphabet thường
//Ép người dùng nhập kí tự thường

//In ra kí tự đó dưới dạng kí tự, số, octal

int main()
{
    char ch;
    do{
        printf("\nNhap mot ki tu di: ");
        scanf("%c", &ch);
        fflush(stdin);
        if(ch < 97 || ch > 122){
            printf("\nNhap chu thuong ma !!!");
        }
    }while(ch < 97 || ch > 122);

    printf("\n%d, %c, %o", ch, ch, ch);


    return 0;
}
