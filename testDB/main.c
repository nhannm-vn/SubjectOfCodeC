#include <stdio.h>
#include <stdlib.h>
int strLen(char str[]);

int main()
{

    return 0;
}
int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}
