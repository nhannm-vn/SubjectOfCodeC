#include <stdio.h>
#include <stdlib.h>
//#define MAX = 100

const int MAX = 100;// hằng số tên viêt hoa, danh từ, snake_case


/*
input output array

mảng nguyên thủy không có khả năng co giãn
ex: khi tạo ra 6 là cố định. Không thêm đc vào nữa
vd: n = 6
v[n] -->bug
vì n có thể thay đổi còn mảng thì không
*/

int main()
{
    /*
    int v[6] = {17, 28, 11, 40, 13, 5};

    printf("\nTo vietlotte ne: ");
    for(int i = 0; i <= 5; i++){//in ra
        printf("%d ", v[i]);
    }// i = 0 1 2 3 4 5
    */
    //inputArray: nhập vào kích thước
    int arr[100];// tạo ra 100 biến tên arr từ arr[0]-->arr[99];
    int size;//kich thuoc gia
    printf("\nNhap kich thuoc ma ban muon di: ");
    scanf("%d", &size);//4

    //Nhập vào từng giá trị
    for(int i = 0; i <= size - 1; i++){//Nhập các giá trị vào mảng
        printf("\nNhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    //outputArray
    printf("\nMang vua nhap ne: ");
    for(int i = 0; i <= size - 1; i++){
        printf("\narr[%d]: ", i);
        printf("%d", arr[i]);
        printf("\n");
    }





    return 0;
}
