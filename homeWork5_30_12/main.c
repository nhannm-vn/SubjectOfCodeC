#include <stdio.h>
#include <stdlib.h>
//5.hàm nhận vào n, return số fibonacci thứ n

int fibonacci(int n);

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nInput n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 1){
            printf("\nInput again");
            printf("\n");
        }
    }while(ch != 10 || n < 1);

    printf("\nTai vi tri %d thi co gia tri la: %d", n, fibonacci(n));

    return 0;
}

int fibonacci(int n){
    int prev = 0;
    int curr = 1;
    int result = 1;
    for(int i = 1; i <= n - 1; i++){
        result = curr + prev;
        prev = curr;
        curr = result;
    }
    return result;
}
