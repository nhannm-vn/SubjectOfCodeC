#include <stdio.h>
#include <stdlib.h>

void toUpperCaseV1(void);//Khai bao

int main()
{
    toUpperCaseV1();//Call

    return 0;
}

void toUpperCaseV1(void){//build (xin lam ke)
    //Input xin
    char ch;
    printf("\nInput ki tu: ");
    scanf("%c", &ch);
    fflush(stdin);
    //Process lam
    if(ch >= 97 && ch <= 122){
        ch = ch - 32;
    }
    //output ke
    printf("\nch = %c", ch);
}


