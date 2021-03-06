#include <stdio.h>
#include <malloc.h>

#define David  99//宏变量

void allocateSpace(int **p) {
//    sizeof(int)  4个字节 1  8个字节 2
    int *temp = malloc(sizeof(int) * 16);
    for (int i = 0; i < 16; ++i) {
        temp[i] = 100 + i;
    }
//    *p 一级指针   1     二级指针
    *p = temp;
}

void freeArray(int **pArray, int n) {
    for (int i = 0; i < n; ++i) {
        printf("free addr    ", (*(pArray + i)));
        free((*(pArray + i)));
//        free(*(pArray+i))
    }
}

void print_array(int **arr, int n) {

    for (int i = 0; i < n; i++) {
        printf("free addr %d\n", (*arr)[i]);
    }
}

int main() {
    int *aa = NULL;
    allocateSpace(&aa);
    print_array(&aa, 16);
    //aa 是一个16个元素的数组，bb是一个四个元素的数组，每个元素是aa的四个元素为一组
    int (*bb)[4] = &aa;
    //此时要释放bb的内存不能写free（*bb） 因为bb可能不是连续的内存空间，所以要逐个释放


    int **ptr = NULL;
    int num = 3, size = 4, i, j;

    ptr = (int **) malloc(num * sizeof(int *));
//    ptr指向声明数组  元素 存放int*

    for (i = 0; i < num; ++i) {
        *(ptr + i) = (int *) malloc(size * sizeof(int));
        printf("addr   %p\n", ptr + i);
        for (j = 0; j < size; ++j)
            *(*(ptr + i) + j) = (i + 1) * j;
    }
    for (i = 0; i < num; ++i) {
//        for(j=0; j<size; ++j)
//        {
//            printf("(%d, %d) -> %d\t", i, j, *(*(ptr+i)+j));
//        }
//        printf("\n");
    }
    freeArray(ptr, 4);
    free(ptr);
//    ptr = NULL;
//ptr 悬空指针

    return 0;
}
