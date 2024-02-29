#include <stdio.h>
#include <stdlib.h>
//spliceStr:
//f(str, pos, amount)
//từ vị trí xóa số lượng amount
int strLen(char str[]);
int spliceStr(char str[], int pos, int amount);
int main()
{
    char str[100];
    int pos = 0;
    int amount = 0;
    printf("\nNhap vao chuoi: ");
    gets(str);
    printf("\nStr: %s", str);
    printf("\nNhap vao pos: ");
    scanf("%d", &pos);
    printf("\nNhap vao amount: ");
    scanf("%d", &amount);

    int result = spliceStr(str, pos, amount);
    if(result == 0){
        printf("\nVi tri khong hop li");
    }else{
        printf("\nStr sau xu li: ");
        printf("\nstr: %s", str);
    }
    return 0;
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

int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}



//***option
//strInStr: tìm chuỗi trong chuỗi
//delSubInStr: xóa sub trong str
