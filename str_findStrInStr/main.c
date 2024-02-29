#include <stdio.h>
#include <stdlib.h>
//strInStr: tìm chuỗi trong chuỗi
int strInStr(char str[], char sub[]);
int strLen(char str[]);
int main()
{
    char str[100];
    char sub[100];

    printf("\nNhap str: ");
    gets(str);
    printf("\nstr: %s", str);

    printf("\nNhap sub: ");
    gets(sub);
    printf("\nsub: %s", sub);

    int result = strInStr(str, sub);
    if(result == -1){
        printf("\nKhong tim thay");
    }else{
        printf("\nVi tri: %d", result);
    }
    return 0;
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
