#include <stdio.h>
#include <stdlib.h>

void printOdd();

int main()
{
    printOdd();


    return 0;
}

void printOdd(){
    int n = 0;
    printf("\nNhap n di: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            printf("\n%d", i);
        }
    }
}
