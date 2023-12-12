#include <stdio.h>
#include <stdlib.h>
//02-if else
//Cấu trúc phân nhánh
int main()
{
    /*
    if(conditional){
       command block;
    }else if(conditional){
       command block;
    }
    */

    int car = 7;
    printf("\nSai gon");
    printf("\nCao toc lien khuong");
    //Gặp 1 biển báo
    if(car >= 7){
        printf("\nPren");
    }else if(car == 7){
        printf("\nSacom");
    }else{
        printf("\nMimosa");
    }
    printf("\nDa Lat");
//if và else if liền kề mà không có else coi như 2 đk riêng lẻ

//Nói riêng về điều kiện:
//comparision operator: toán tử điều kiện
// == so sánh bằng

// =! so sánh khác

// > < >= <= so sánh lớn bé

//mathetic operator: toán tử, toán hạng
// + - * / %
//toán tử tăng

  int a = 5;
  a += 2;//7
  a = a + 2;//9
  a = a + 1;//10
  a += 1;//11
  a++;//12
  a -= 1;//11
  a--;//10

  //II - Logical operator: toán tử logic
  //muốn đi bar thì cần gì
  //tuổi từ 18 trở lên
  //money trên 300
  int age = 25;
  int money = 11;
  /*
  if(age >= 18){
    if(money > 300){
      printf("\nWelcome");
    }else{
      printf("\nCut");
    }
  }else{
    printf("\nCut");
  }*/

   //Logical
   //And && Or ||

   if(age >= 18 && money > 300){
     printf("\nWelcom");
   }else{
     printf("\nCut");
   }

   //&&: tìm false, thấy false chốt false
   //||: tìm true, thấy true chốt true

   //redefidation trùng biến

   a = 9;
   int b = 2;
   if(a == 10 || b++ > 2){
     printf("\nTrue a = %d, b = %d", a, b);
   }else{
     printf("\nFalse a = %d, b = %d", a, b);
   }
   //ss b xong mới tăng b



    return 0;
}
