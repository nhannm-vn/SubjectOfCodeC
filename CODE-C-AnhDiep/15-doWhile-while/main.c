#include <stdio.h>
#include <stdlib.h>

//do-while/ while /for
//đều là vòng lặp

int main()
{
    /*int i = 1;
    do{
        printf("\nI love du %d", i);
        i++;
    }while(i <= 10);
*/
    /*
    int a;
    for(;;){//Vòng lặp vô tận
       printf("\nNhap a di: ");
       scanf("%d", &a);
       if(a == 15){
        break;
       }
    }
    */
    /*
    int a;
    do{
        printf("\nNhap a di: ");
        scanf("%d", &a);
    }while(a != 15);
    */
    //For dung cho những vòng lặp có khởi đầu và kết thúc
    //do while dùng khi không biết số lần lặp và để bẫy và không quan tâm bước nhảy


    int i = 1;
    while(i <= 10){
        printf("\n I lop do %d", i);
        i++;
    }

    //While dùng khi xài boolen. ĐỂ LẶP VÔ TẬN 1 == 1



    return 0;
}
