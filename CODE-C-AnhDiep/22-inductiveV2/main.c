#include <stdio.h>
#include <stdlib.h>

/*22-inductiveV2
Nhap vao mot so nguyen duong number >= 1
tinh tong: 1 + 1/3 + 1/6 +...1/(1+2+3+...+n)

*/
int main()
{
    int number = 0;
    char ch;
    //ep nhap so number >= 1
    do{
        printf("\nInput number : ");
        scanf("%d", &number);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || number < 1){
            printf("\nSai roi. Moi nhap lai!");
            printf("\n");
        }
    }while(ch != 10 || number < 1);

    //1 + 1/3 + 1/6 +...1/(1+2+3+...+n)

    int sum = 0;
    float tong = 0;
    for(int  i = 1; i <= number; i++){
        sum += i;
        tong += (float)1 / sum;
    }
    printf("\nTong cua day la: %.2f", tong);







    return 0;
}
