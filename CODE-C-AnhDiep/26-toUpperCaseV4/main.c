#include <stdio.h>
#include <stdlib.h>

char toUpperCaseV4(char character);//Khai bao

int main()
{//Input
    char ch;
    printf("\ninput ky tu: ");
    scanf("%c", &ch);
    fflush(stdin);
    //printf("\nKi tu sau bien doi la: %c", toUpperCaseV4(ch));

    ch = toUpperCaseV4(ch);
    printf("\nKy tu sau: %c", ch);

    return 0;
}

char toUpperCaseV4(char character){
    if(character >= 97 && character <= 122){
        character -= 32;
    }

    return character;// return; cũng được và ném giá trị gần nhất
}
