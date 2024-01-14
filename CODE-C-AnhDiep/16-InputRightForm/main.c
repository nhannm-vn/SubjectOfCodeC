#include <stdio.h>
#include <stdlib.h>

//Ép người dùng nhập vào số nguyên đích thực, sai là chữi
//ép nhập lại
//12 ok
//15.6 chửi ép nhập lại
//12a chửi và ép nhập lại

//fflush(stdin) xài khi có sự nhập giauwx kí tự và số. Cần sử dụng nó để làm clear buffer

int main()
{
    int number;
    char ch;

    do{
        printf("\nNhap so nguyen di: ");
        scanf("%d", &number);
        scanf("%c", &ch);//Hứng phân dư là \n
        //printf("%c", ch); sẽ in ra số sau đó ví dụ 22ab sẽ hứng là a
        //printf("%d", ch); in ra \n là 10
        fflush(stdin);//xóa phân dư còn lại. Ví dụ 9.79 thì nó lưu số 9 vào number. Dấu . vào ch quay đợt 2 thì lưu lại 79 vào number
        if(ch != 10){
            printf("\nDo ku know input interger !!!");
        }
    }while(ch != 10);


    return 0;
}
