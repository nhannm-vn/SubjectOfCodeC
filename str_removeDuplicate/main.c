#include <stdio.h>
#include <stdlib.h>
//RemoveDup:
//xóa các ký tự trùng trong chuỗi
int strLen(char str[]);
int removeDulicate(char str[]);
int searchStr(char str[], char key);
int main()
{
    char str[100];
    printf("\nNhap chuoi: ");
    gets(str);

    int amount = removeDulicate(str);
    if(amount == 0){
        printf("\nKhong co trung");
        printf("\namount: %d", amount);
    }else{
        printf("\namount: %d", amount);
        printf("\nstr la: %s", str);
    }



    return 0;
}
int searchStr(char str[], char key){
    int size = strLen(str);
    for(int i = 0; i <= size - 1; i++){
        if(str[i] == key){
            return i;
        }
    }
    return -1;
}

int removeDulicate(char str[]){
    int count = 0;
    int size = strLen(str);
    char sub[100];
    int sizeSub = 0;
    for(int i = 0; i <= size - 1; i++){
        if(searchStr(sub, str[i]) == -1){
            sub[sizeSub] = str[i];
            sizeSub++;
        }else{
            count++;
        }
    }
    sub[sizeSub] = '\0';
    str[0] = '\0';
    size = 0;
    for(int i = 0; i <= sizeSub - 1; i++){
        str[size] = sub[i];
        size++;
    }
    str[size] = '\0';
    return count;
}

int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}
