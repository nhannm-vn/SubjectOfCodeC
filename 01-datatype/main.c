#include <stdio.h>
#include <stdlib.h>
//comment:Ghi chú
/*
cntt: xu li thong tin bang công nghệ
Lưu trữ --> xử lí --> báo cáo (report)
datatype: Kiểu dữ liệu
ký tự: char character (chiếm 1 byte) 'a', '2', 'diep'-->'p'

số nguyên: int integer   4byte 9, 1999, 17.9-->17
số thực: float  4byte  9, 1999, 17.9-->17.9
số thực double  (long float) 8byte 9, 17.9, 121313132122312.34324


*/
//C là ngôn ngữ hướng thủ tục
//proceduce: tuần tự           sequence: dòng chạy
//dấu nhắc hệ args
int main()
{
  //lưu trữ
  //lưu kí tự dầu tiên trong tên của mình
  //1.Xác định kiểu: char
  //2.Xác định tên: đặt tên có ý nghĩa
  //cammelcase: cú pháp con lạc đà
  //Không có kí tự đặc biệt
  //Được xài _ và $
  //Không có số ở đầu
  //Phải là danh từ
  //dấu '=' là phép gán|| assignment
  //Đầu tiên không viết hoa, nhưng sau đó viết hoa chữ đầu
  //Tạo ví|ly|biến để lưu

  //FirstCharOfName là sai
  char firstCharOfName ='n';
  //kí tự n đc gán vào firstCharOfName
  //Lưu tuổi của mình:
  int age = 20;
  //Lưu điểm toán vừa rồi: point
  float point = 8.75;
  double score = 9.8;
  //%d: decimal
  //%u: unsign int
  //%i: integer
  //Xem đã lưu được gì
  //printf format: in theo định dang, in theo chuẩn
  printf("Anh Diep dep trai");
  //in ra kí tự đầu tiên trong tên của mình:
  printf("\nKy tu dau tien la: %c", firstCharOfName);
  //in ra tuoi cua ban/ gia tri cua age:
  printf("\nTuoi cua ban la: %i", age);
  printf("\nTuoi cua ban la: %i", age);
  //in ra điểm của bạn:
  printf("\nDiem cua ban la: %.1f", point);
  //in ra score đi:
  printf("\nGia tri cua score: %.2lf", score);
  //In ra dia chi cua bien age di: xài %u unsign int
  printf("\nDia chi cua age la: %u", &age);

  //Ngoại lệ:
  int number = 'A';
  char ch = 66;
  printf("\nNumber ne %d", number);//65 - 'A'
  printf("\nCh ne %c", ch+32);//66-'B'
  //Liên kết với nhau bằng ASII
  //null: \0 biết kiểu nhưng không biết giá trị
  //void: không có gì hết

  //tư duy lập trình:
  //tính tổng và thương của hai biến số nguyên:
  int numb1 = 10;
  int numb2 = 3;
  float resource = (float)numb1/numb2;//ép kiểu dữ liệu: ép từ int --> float thì ok
  //Không chỉnh được là hardcore
  printf("\nThuong hai so nguyen: %d / %d = %.2f", numb1, numb2, resource);

  //swap: hoán vị
  //hoán vị 2 giá trị trong số nguyên
  int number1=15;
  int sting=10;
  //C1:
  //int tmp=sting;//tmp=10
  //sting=number1;//sting=15
  //number1=tmp;//number1=10
  //C2:
  sting=sting+number1;//sting=10+15=25
  number1=sting-number1;//number1=25-15=10
  sting=sting-number1;//sting=25-10=15

  printf("\nnumber1=%d, sting=%d", number1, sting);

    return 0;
}
//trả ra 0 cho người gọi. Window nhận đc 0 là biết chương trình dừng rồi.
