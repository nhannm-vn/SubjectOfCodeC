#include <stdio.h>
#include <stdlib.h>

//Viết hàm nhận vào number a và number b
//nhiệm vụ của hàm là đổi giá trị của hai biến trên

// ngoài main: chúng ta gọi hàm và truyền vào hai biến
//với mong muốn sau khi hàm chạy giá trị bên trong sẽ thay đổi
//thì in ra màn hình có đổi không


//Hàm có tính toán tạo ra số mới sẽ là return
//Hàm chỉ đổi thôi k tạo j mới là void

//Biến contro giá trị là địa chỉ 1 thằng khác
//Biến con trỏ có giá trị, địa chỉ, hook

//Khả năng hook này k quan tâm scope:ảnh hưởng bên ngoài hàm

void swapFunctionV2(int* numberA, int* numberB);

int main()
{
    int numberA = 5;
    int numberB = 3;

    swapFunctionV2(&numberA, &numberB);

    printf("\nnumberA main: %d", numberA);
    printf("\nnumberB main: %d", numberB);
    return 0;
}
//pass by value: bên trong hàm thay đổi, ở ngoài không có gì xảy ra

void swapFunctionV2(int* numberA, int* numberB){
    int tmp = *numberA;
    *numberA = *numberB;
    *numberB = tmp;


}
