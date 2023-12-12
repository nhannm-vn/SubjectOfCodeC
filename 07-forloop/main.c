#include <stdio.h>
#include <stdlib.h>
//07-forLoop: vòng lặp for

int main()
{
    /*
    for(khởi đầu; điều kiện thoát; bước nhảy){
        Khối lệnh: command block
    }*/
    //Còn thỏa thì còn làm
    for(int i = 1; i <= 3; i++){
        printf("\n%d Nguyen The Hoang", i);
    }//blockScope: chỉ tồn tại trong vòng lập for sau khi xong for thì chết

    printf("\ni = %d", i);





    return 0;
}
