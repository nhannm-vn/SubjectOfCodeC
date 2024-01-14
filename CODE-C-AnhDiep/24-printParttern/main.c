#include <stdio.h>
#include <stdlib.h>
//Nhap vao hight va width
//In ra
//vd: hight 5 va width 7
/*
*******
*     *
*     *
*     *
*******
*/

int main()
{
    int height = 0;
    int width = 0;
    printf("\nInput hight: ");
    scanf("%d", &height);

    printf("\nInput width: ");
    scanf("%d", &width);

    for(int h = 1; h <= height; h++){
        for(int w = 1; w <= width; w++){
            if(h == 1 || h == height || w == 1 || w == width){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

/*
    for(int i = 1; i <= hight; i++){
        for(int j = 1; j <= width; j++){
            if(i == 1 || i == hight || j == 1 || j == width){
                printf("*");
            }else{
                printf("-");
            }
        }
        printf("\n");
    }
*/
    return 0;
}
