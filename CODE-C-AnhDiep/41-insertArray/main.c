#include <stdio.h>
#include <stdlib.h>
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int insteadArray(int array[], int size, int pos, int key);
int insertArray(int array[], int *size, int pos, int key);
int deleteArray(int array[], int *size, int pos);
int checkAnna(int array[], int size);
int main()
{
    int array[100];
    int size = 0;
    int key = 0;
    int pos = 0;

    inputArray(array, &size);
    printf("\nCac phan tu la: ");
    outputArray(array, size);
    /*
    printf("\nNhap vao pos: ");
    scanf("%d", &pos);

    printf("\nNhap vao key: ");
    scanf("%d", &key);
    */
    //xai ham
    /*
    if(insteadArray(array, size, pos, key) == 0){
        printf("\nVi tri khong hop le");
    }else{
        //in ra:
        printf("\nMang sau khi bien doi: ");
        outputArray(array, size);
    }
    */
    //xai ham

    /*
    if(insertArray(array, &size, key, pos) == 0){
        printf("\nVi tri khong thoa");
    }else{
        printf("\nCac phan tu sau khi bien doi: ");
        outputArray(array, size);
    }
    */
    /*
    if(deleteArray(array, &size, pos) == 0){
        printf("\nVi tri xoa khong thoa");
    }else{
        printf("\nMang sau khi xoa: ");
        outputArray(array, size);
    }
    */
    if(checkAnna(array, size)){
        printf("\nDay la Anna");
    }else{
        printf("\nKhong phai Anna");
    }
    return 0;
}
int checkAnna(int array[], int size){
    for(int i = 0; i <= size/2 - 1; i++){
        if(array[i] != array[size - 1 - i]){
            return 0;
        }
    }
    return 1;
}
int deleteArray(int array[], int *size, int pos){
    if(pos < 0 || pos > *size - 1){
        return 0;
    }                         //- 1
    for(int i = pos; i <= *size - 2; i++){
        array[i] = array[i + 1];
    }
    (*size)--;
    return 1;
}
int insertArray(int array[], int *size, int key, int pos){
    if(pos < 0 || pos > *size){
        return 0;
    }else{
        for(int i = *size - 1; i >= pos; i--){
            array[i + 1] = array[i];
        }
        (*size)++;
        array[pos] = key;
        return 1;
    }
}
int insteadArray(int array[], int size, int pos, int key){
    if(pos < 0 || pos > size - 1){
        return 0;
    }
    array[pos] = key;
    return 1;
}
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%d ", array[i]);
    }
}
void inputArray(int array[], int *size){
    printf("\nNhap vao do lon: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\narray[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
/*
instead: thay thế giá trị của một phần trong mảng
mô tả: f(array[], pos, key)
vào trong mảng ở vị trí pos thay bằng key
arr: 2 4 6 8 10
i    0 1 2 3 4  pos: 2, key: 9

insertArray: nhét một số vào vị trí nào đó trong mảng
     nhiệm vụ: hàm nhận vào một vị trí và key. Nhét key vào vị trí thứ pos trong
     mảng
arr: 2 4 6 8 10
i    0 1 2 3 4  pos: 2, key: 9

deleteArray: xóa phần tử ở vị trí thứ pos trong mảng
     nhiệm vụ: hàm  nhận vào một mảng, pos
     vào trong mảng tìm thằng pos và xóa

checkAnna: kiểm tra một mảng có phải đối xứng hay không//có thể lật ngược rồi so sánh lại
arr: 2 3 4 3 2 return 1
arr: 2 3 4 4 3 2 return 1
arr: 2 3 4 2 3 return 0
*/
