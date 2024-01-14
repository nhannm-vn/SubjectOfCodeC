#include <stdio.h>
#include <stdlib.h>
/*Nhập vào một số nguyên n
xuất ra màn hình kết quả của
1^n + 2^n + 3^n +...+ n^n
vd: ta nhập n=5
thì phải in ra 1^5 + 2^5 + 3^5 +...+5^5
*/
int main()
{
    int n;
    printf("\nNhap vao so mu: ");
    scanf("%d", &n);

    double gt = 0;
    printf("\nGia tri tong la: ");
    for(int i = 1; i <= n; i++){
        printf("%d^%d ",i,n);
        if(i < n){
        printf(" + ");
        }
        gt = gt + pow(i,n);
    }
    printf("= %.f", gt);



    return 0;
}
