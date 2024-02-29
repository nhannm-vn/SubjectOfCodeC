#include <stdio.h>
#include <stdlib.h>
//RemoveKey:
//f(str, key)
//xóa hết các key trong str
int strLen(char str[]);
void deleteStrByPos(char str[], int pos);
int removeKey(char str[], char key);
int main()
{
    char str[100];
    char key = 0;
    printf("\nInput str: ");
    gets(str);
    printf("\nstr la: %s", str);
    printf("\nNhap vao key: ");
    scanf("%c", &key);

    int amount = removeKey(str, key);
    if(amount == 0){
        printf("\namount ne: %d", amount);
        printf("\nKhong co key");
    }else{
        printf("\namount ne: %d", amount);
        printf("\nstr la: %s", str);
    }
    return 0;
}
int removeKey(char str[], char key){
    int count = 0;
    int size = strLen(str);
    for(int i = 0; i <= size - 1; i++){
        if(str[i] == key){
            deleteStrByPos(str, i);
            i--;
            count++;
        }
    }
    return count;
}

void deleteStrByPos(char str[], int pos){
    int size = strLen(str);
    for(int i = pos; i <= size - 2; i++){
        str[i] = str[i + 1];
    }
    str[size - 1] = '\0';
}

int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}
