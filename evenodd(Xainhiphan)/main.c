#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Xài nhị phân để in ra chẵn lẻ
    int start;
    int end;
    printf("Nhap vao day so bat dau tu: " );
    scanf("%d", &start);

    printf("\nKet thuc: ");
    scanf("%d", &end);

    //Tao điều kiện để nhập đúng:
    int tem;
    if(start > end){
        tem = start;
        start = end;
        end = tem;
    }

    printf("\nCac so trong day la:\n");
    for(int i = start; i <= end; i++){
        printf("%d\t", i);
    }

    //In ra các số chẵn và lẻ:
    printf("\nCac so le trong day la:\n");
    for(int i = start; i <= end; i++){//Số chẵn cút only lẻ
        if(i & 1){                    //if(0) thì sai if(1) thì đúng nên 2 & 1 =000 sai ==> chẵn
            printf("%d\t", i);
        }
    }

    printf("\nCac so chan trong day la: \n");
    for(int i = start; i <= end; i++){
        if(i & 1){

        }else{
            printf("%d\t", i);
        }
    }

    return 0;
}
