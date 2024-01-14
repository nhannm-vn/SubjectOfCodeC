#include <stdio.h>
#include <stdlib.h>

void toUpperCaseV2(char character);//Trong hàm phải đặt character full tên

int main()
{
    //toUpperCaseV2('b');//Van chay
    char ch;
    printf("\nInput ky tu di: ");
    scanf("%c", &ch);

    toUpperCaseV2(ch);//call lệnh ẩn char character = ch // ch: argumet

    //ch:  đối số (không thay đổi)  character: tham số(thay đổi)
    //Mối quan hệ character vs ch là: pass by value(truyền tham trị)//Không bị thay đổi
    //Nếu đặt tên giống nhau vẫn được
    return 0;
}
                    // parament
void toUpperCaseV2(char character){//Tên đặt của char character phải đồng nhất với ở trong hàm
    //Process
    if(character >= 97 && character <= 122){
        character -= 32;
    }
    //output
    printf("\nKy tu = %c", character);
}
