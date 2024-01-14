#include <stdio.h>
#include <stdlib.h>

//Tb nhan

float geomatric(int start, int end);

int main()
{
    int start = 0;
    int end = 0;
    printf("\nInput start: ");
    scanf("%d", &start);

    printf("\nInput end: ");
    scanf("%d", &end);

    if(start > end){
        int thu = 0;
        thu = start;
        start = end;
        end = thu;
    }

    printf("\n%f", geomatric(start, end));

    return 0;
}

float geomatric(int start, int end){
    int mul = 1;
    int count = 0;
    for(int i = start; i <= end; i++){
        mul *= i;
        count++;
    }
    return pow(mul,(float)1/count);
}
