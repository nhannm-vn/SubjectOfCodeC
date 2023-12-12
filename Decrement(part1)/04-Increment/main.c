#include <stdio.h>
#include <stdlib.h>

int main()
{

    //int a = 10;
    //int b = ++a + a++ * ++a + ++a * ++a + ++a;
         // (              )   (      )
         //  13    11      13   15     15   16
         //a=16
         //b=397
    //printf("a = %d\nb = %d\n",a,b);

    int c = 10;
    printf("%d %d %d %d %d %d %d", ++c, c++, c++, ++c, c, c++, c);
    //                              15  13   12    15  15  10  15





    //TH khó
   // int a = 10;
    //int b = a++ * ++a + ++a * a++ + ++a * ++a;
    //     (        )    (     )    (      )
    //      10      12   13    13    15    16
    //       10     12   14    13    16      16
    //printf("a = %d\nb = %d", a, b);
    // a = 15    b =558


    /*
    int a = 10;
    int b = ++a + ++a * a++ * ++a + ++a + ++a;

    printf("a = %d\nb = %d", a, b);
    //    (        (       )      )
    //     11     12     12
    //     14   +  13 *    12 *  14 + 15  + 16 = 2229
    */



    return 0;
}
