#include <stdio.h>
#include <stdlib.h>

//32-pointer

int main()
{
    int tt = 200;//Biến bthg lưu giá trị
    int *hari = &tt;//biến pointer lưu địa chỉ của biến mà nó muốn điều khiển

    //Gía trị dùng tên, địa chỉ dùng &ten

    printf("\nValue tt: %d", tt);//200
    printf("\nAddress tt: %u", &tt);//%u sẽ lời hơn khi xài %d//6422036
    printf("\nValue hari: %u", hari);//6422036
    printf("\nAddress hari: %u", &hari);
    printf("\nHook hari: %d", *hari);//200
    *hari -= 150;
    printf("\nValue tt: %d", tt);//50

    return 0;
}
