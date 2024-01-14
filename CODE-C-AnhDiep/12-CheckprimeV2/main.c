#include <stdio.h>
#include <stdlib.h>

//Check prime V2
//Không dùng return

int main()
{
    //Nhập vào một con số cần check:
   int number;
   int isprime = 1;//1: true  0: false
   printf("\nInput number: ");
   scanf("%d", &number);


   if(number >= 2){//Check tiep:
      for(int i = 2; i <= number - 1; i++){
        if(number % i == 0){
            isprime = 0;//Niem tin bien mat
            break;//dừng loop gần nhất
        }
      }
      if(isprime == 1){
        printf("\n%d is prime", number);
    }else{
        printf("\n%d is not prime", number);
    }
   }else{
        printf("\n%d is not prime", number);
   }




    return 0;
}
