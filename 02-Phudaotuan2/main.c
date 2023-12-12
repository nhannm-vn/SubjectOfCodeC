#include <stdio.h>
#include <stdlib.h>

int main()
//1 + 1/2 + 1/3 + ... + 1/n
//1 + (1 + 2)/2 + (1 + 2 + 3)/3 + (1 + 2 + 3 + 4)/4 +...
//Khi làm việc với bài toán thập phân ( phân số )
        //Khai báo float, double
        // %f, %lf
        //Nhớ ép kiểu
        //(float)(sum/i) tính trong hoặc xong mới ép==>cook
        //(float)sum/i để lại dấu . thập phân
        //break dừng vòng for
        //return dừng chương trình
{
    int n;
    printf("\nNhap vao so n: ");
    scanf("%d", &n);


    float gt = 0;
    int gt2 = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
           gt2 += j;
        }
        gt += (float)gt2/i;
        gt2 = 0;
    }
    printf("\nGia tri cua phep tinh: %.2f", gt);

    /*

    int sum = 0;
    float  result = 0;
    for(int i = 1; i <= n; i++){
        sum = sum + i;
        result =result + (float)sum / i;
    }
    printf("\nKet qua la: %.2f", result);

    */
    return 0;
}
