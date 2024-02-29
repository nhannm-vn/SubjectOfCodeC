#include <stdio.h>
#include <stdlib.h>
int strLen(char str[]);
void upperCase(char str[]);
int main(){
    char str[100] = "f88 NhA Cai dEn tU chAu Au";

    upperCase(str);
    printf("\nChuoi sau bien doi: ");
    printf("\n%s", str);

    return 0;
}
void upperCase(char str[]){
    int size = strLen(str);
    for(int i = 0; i <= size - 1; i++){
        if(str[i] >= 97 && str[i] <= 122){
            str[i] -= 32;
        }
    }
}

int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}
//btvn
//strCmp: so sánh 2 chuỗi với nhau

//strUpr: uperCase
//      f(str)
//      str: 'f88 NhA Cai dEn tU chAu Au'
//           'F88 NHA CAI DEN TU CHAU AU'
//RemoveDup:
//      xóa các ký tự trùng trong chuỗi
//spliceStr:
//      f(str, pos, amount)
//      từ vị trí xóa số lượng amount
//RemoveKey:
//      f(str, key)
//      xóa hết các key trong str
//***option
//strInStr: tìm chuỗi trong chuỗi
//delSubInStr: xóa sub trong str
