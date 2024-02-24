#include <stdio.h>
#include <stdlib.h>
//42-deleteArray
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int removeKeyInArray(int array[], int *size, int key);
void deleteElementByPos(int array[], int *size, int pos);
int removeKeyInArrayV2(int array[], int *size, int key);

int search(int array[], int size, int key);
int removeDuplicate(int array[], int *size);
int removeDuplicateV2(int array[], int *size);

void insertArrayInToArray(int array[], int *size, int sub[], int sizeSub, int pos);
int main()
{
    int array[] = {2,4,6,8};//dãn theo số lượng phân tử
    int size = sizeof(array) / sizeof(array[1]);
    /*
    int key = 0;
    printf("\nNhap vao key: ");
    scanf("%d", &key);
    */
    //int amount = removeKeyInArrayV2(array, &size, key);
    //int amount = removeDuplicateV2(array, &size);
    //printf("\namount ne: %d", amount);

    int arrayS[] = {1,3,5};//dãn theo số lượng phân tử
    int sizeS = sizeof(arrayS) / sizeof(arrayS[1]);
    insertArrayInToArray(array, &size, arrayS, sizeS, 2);

    printf("\nCac phan tu la: ");
    outputArray(array, size);


    return 0;
}
//ArrayInArray: tìm mảng con có nằm trong mảng bự hay không
//Splice: trong mảng xoa từ vị trí pos số lượng amount phân tử
//Xóa hết mảng con trong mảng cha
//arr: 2 1 1 3 5 1 3 5 7
//sub: 1 3 5


void insertArrayInToArray(int array[], int *size, int sub[], int sizeSub, int pos){
    for(int i = *size - 1; i >= pos; i--){
        array[i + sizeSub] = array[i];
    }
    (*size) += sizeSub;
    //nhét sub vào chỗ trống
    for(int i = 0; i <= sizeSub - 1; i++){
        array[pos + i] = sub[i];
        /*
        array[pos] = sub[i];
        pos++;
        */
    }
}

int removeDuplicateV2(int array[], int *size){
    int count = 0;
    for(int i = 0; i <= *size - 2; i++){
        for(int j = i+1; j <= *size - 1; j++){
            if(array[i] == array[j]){
                deleteElementByPos(array, size, j);
                j--;//lùi lấy đà
                count++;
            }
        }
    }
    return count;
}
int removeDuplicate(int array[], int *size){
    int tmp[100];
    int sizeTmp = 0;
    int count = 0;
    //duyệt array
    for(int i = 0; i <= *size - 1; i++){
        if(search(tmp, sizeTmp, array[i]) == -1){//Tìm không có thì nhét vào tmp
            tmp[sizeTmp] = array[i];
            sizeTmp++;
        }else{//nhằm đếm số phần tử bị trùng
            count++;
        }
    }
    //array copy tmp
    for(int i = 0; i <= sizeTmp - 1; i++){
        array[i] = tmp[i];
    }
    *size = sizeTmp;//lòng tự trọng
    return count;
}

/*
hàm tìm kiếm giá trị có tồn tại trong mảng không
*/
int search(int array[], int size, int key){
    for(int i = 0; i <= size - 1; i++){
        if(array[i] == key){
            return i;
        }
    }
    return -1;
}


int removeKeyInArrayV2(int array[], int *size, int key){
    //duyệt mảng array
    int count = 0;
    for(int i = 0; i <= *size - 1; i++){
        if(array[i] == key){
            deleteElementByPos(array, size, i);
            i--;//lùi lại lấy đà tránh xóa thiếu
            count++;
        }
    }
    return count;
}
/*
hàm xóa phân tử ở vị trí pos được cho
*/
void deleteElementByPos(int array[], int *size, int pos){
    for(int i = pos; i <= *size - 2; i++){
        array[i] = array[i+1];
    }
    (*size)--;
}
int removeKeyInArray(int array[], int *size, int key){
    int tmp[100];
    int sizeTmp = 0;
    int count = 0;
    for(int i = 0; i <= *size - 1; i++){//duyet mang array
        if(array[i] != key){//nếu khác key thì nhét vào tmp
            tmp[sizeTmp] = array[i];
            sizeTmp++;
        }else{//nếu là key thì không nhét chỉ dếm
            count++;
        }
    }
    //array copy tmp
    for(int i = 0; i <= *size - 1; i++){//đập đối xứng
        array[i] = tmp[i];
    }
    *size = sizeTmp;//sao chép có tự trọng
    return count;//ném ra số phần tử đã xóa
}
void inputArray(int array[], int *size){
    printf("\nNhap vao do lon: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\narray[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%d ", array[i]);
    }
}
