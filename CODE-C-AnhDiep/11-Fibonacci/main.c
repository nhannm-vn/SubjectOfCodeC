#include <stdio.h>
#include <stdlib.h>
/*Dãy số hoàn hảo
Nhập vào một số nguyên n
In ra màn hình ố ở vị trí n trong dãy fibonacci
bình thường thì bắt đầu số 1 nếu lập trình thì số 0
*/
int main()
{
    //setup trạng thái n=1
    int prev = 0;
    int curr = 1;
    int result = 1;

    int n;
    printf("\nNhap vao gt n ");
    scanf("%d", &n);

    for(int i = 1; i <= n - 1; i++){
        result = prev + curr;
        prev = curr;
        curr = result;
    }

    printf("\nGia tri tai vt %d la: %d", n, result);


    return 0;
}
