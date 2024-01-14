#include <stdio.h>
#include <stdlib.h>
//Viết hàm nhận vào hai cạnh dài rộng
//Tính diện tích của hình chữ nhật
//Nếu là in thì là void

float computeArea(float width, float height);

int main()
{
    float w, h;
    printf("\nInput w: ");
    scanf("%f", &w);

    printf("\nInput h: ");
    scanf("%f", &h);

    float s = computeArea(w, h);//call
    printf("\nDien tic: %f", s);

    return 0;
}
float computeArea(float width, float height){
    float area = width * height;
    return area;
}
