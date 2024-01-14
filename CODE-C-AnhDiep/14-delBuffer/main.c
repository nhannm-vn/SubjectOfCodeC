#include <stdio.h>
#include <stdlib.h>

//Nhập age, và firstCharOfName, rồi in ra màn hình
int main()
{
    int age = 0;//ĐỂ KHÔNG CHỨA RÁC CÓ THỂ CHO AGE = 0
    char firstCharOfName;

    printf("\nInput age :");
    scanf("%d", &age);
    //Khi nhập vào số rồi kí tự nó sẽ hiểu
    //nhập vào một số rồi còn dính \n
    //Nên khi scanf kí tự nó sẽ quăng thằng \n vào biến đó
    //khi nhập 10asds buffer sẽ chứa a nên lưu qua bên scanf kia là a
    //khi nhập 10 rồi enter nó sẽ hiểu \n là kí tự rồi lưu vào a;
    //Xóa buffer
    fflush(stdin);
    printf("\nInput fistCharOfName: ");
    scanf("%c", &firstCharOfName);

    //In ra man hinh
    printf("\nAge ne: %d", age);
    printf("\nfirstCharOfName ne: %c", firstCharOfName);

    return 0;
}
