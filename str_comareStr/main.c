#include <stdio.h>
#include <stdlib.h>
//strCmp: so sánh 2 chuỗi với nhau
int strLen(char str[]);
int compareStr(char str[], char sub[]);
int main()
{
    char str[100];
    char sub[100];
    printf("\nNhap vao str: ");
    gets(str);
    printf("\nstr ne: %s", str);

    printf("\nNhap vao sub: ");
    gets(sub);
    printf("\nstr ne: %s", sub);

    int result = compareStr(str, sub);
    if(result == 1){
        printf("\nstr > sub");
    }else if(result == -1){
        printf("\nstr < sub");
    }else{
        printf("\nstr = sub");
    }

    return 0;
}
int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}
int compareStr(char str[], char sub[]){
    int size = strLen(str);
    int sizeSub = strLen(sub);
    int sizeTmp = 0;
    if(size < sizeSub){
        sizeTmp = size;
    }else{
        sizeTmp = sizeSub;
    }
    for(int i = 0; i <= sizeTmp - 1; i++){
        if(str[i] > sub[i]){
            return 1;
        }else if(str[i] < sub[i]){
            return -1;
        }
    }
    if(size > sizeSub){
        return 1;
    }else if(size < sizeSub){
        return -1;
    }else{
        return 0;
    }
}

