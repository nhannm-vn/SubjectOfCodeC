#include <stdio.h>
#include <stdlib.h>
//delSubInStr
int strLen(char str[]);
int strInStr(char str[], char sub[]);
int spliceStr(char str[], int pos, int amount);
void delSubInStr(char str[], char sub[]);
int main()
{
    char str[100];
    char sub[100];
    printf("\nNhap vao str: ");
    gets(str);
    printf("\nstr: %s", str);
    printf("\nNhap vao sub: ");
    gets(sub);
    printf("\nsub: %s", sub);

    delSubInStr(str, sub);
    printf("\nStr sau xu li: %s", str);

    return 0;
}
void delSubInStr(char str[], char sub[]){
    int size = strLen(str);
    int sizeSub = strLen(sub);
    while(spliceStr(str, strInStr(str, sub), sizeSub));
}

int spliceStr(char str[], int pos, int amount){
    int size = strLen(str);
    if(pos < 0 || pos > size - 1){
        return 0;
    }
    for(int i = pos; i <= size - 1; i++){
        str[i] = str[i + amount];
    }
    str[size - amount] = '\0';
    return 1;
}

int strInStr(char str[], char sub[]){
    int size = strLen(str);
    int sizeSub = strLen(sub);

    for(int i = 0; i <= size - 1; i++){
        if(str[i] == sub[0]){
            for(int j = 0; j <= sizeSub - 1; j++){
                if(str[i+j] != sub[j]){
                    break;
                }else{
                    if(j == sizeSub - 1){
                        return i;
                    }
                }
            }
        }
    }
    return -1;
}
int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}
