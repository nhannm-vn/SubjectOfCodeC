#include <stdio.h>
#include <stdlib.h>

char toUpperCaseV3(void);

int main()
{
    char ch = toUpperCaseV3();
    printf("Ky tu sau khi bien doi: %c", ch);


    return 0;
}

char toUpperCaseV3(void){//Trong hàm nên đặt biến ra tên cụ thể
    char character;
    printf("\nInput ki tu: ");
    scanf("%c", &character);
    fflush(stdin);
    //Process lam
    if(character >= 97 && character <= 122){
        character = character - 32;
    }

    return character;//Co return phải tạo biến để hứng
}
