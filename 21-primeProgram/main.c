#include <stdio.h>
#include <stdlib.h>

/*21-primeProgram
1. viết 1 chương trình
    cho người dùng nhập vào 1 số nguyên đích thực
    kiểm tra xem số đó có phải số nguyên tố không.
    sau đó lại cho người dùng nhập vào 1 số nguyên
    đích thực,kiểm tra xem số đó có phải số nguyên
    tố không, rồi lại tiếp tục ...
    nếu em nhập vào 0 thì ngừng
*/

int main()
{
    int number = 0;//Khai báo biến
    char ch;//Xài để hứng \n

    do{
        do{//Dùng cho số nguyên đích thực
           printf("\nInput number: ");
           scanf("%d", &number);
           scanf("%c", &ch);//Hứng \n
           fflush(stdin);//Dọn rác buffer chuẩn bị số kế tiếp

        }while(ch != 10);//Điều kiện thoát
        //Xét số nguyên tố

        if(number >= 2){
            int isPrime = 1;
            for(int i = 2; i <= number - 1; i++){
                if(number % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){
                printf("\n%d is prime", number);
            }else if(isPrime == 0){
                printf("\n%d is not prime", number);
            }
        }else{
            printf("\n%d is not prime", number);
        }
        printf("\n");

    }while(number != 0);



    return 0;
}
