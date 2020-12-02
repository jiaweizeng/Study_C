#include <stdio.h>
#include <malloc.h>
#include <memory.h>
int main() {
//    Person person

    int a = 0;
//NULL  =0
    int *p ;//不加 1   加2

//    printf("---%p  ", p);
//    *p = 10;
    //if(person!=null){}
// n* sizeof(char)
//    int * arr= malloc(16);
//    memset(arr, 0, 16);
    int * arr= calloc(2, 16);

    for (int i = 0; i < 4; ++i) {
        printf("i %d:  value: %d \n",i,*(arr+i));
        printf("i %d:  value: 0x%x \n",i, (arr+i));
    }

    /**
     */
    free(arr);
    arr = NULL;
    if (arr) {

    }
    printf(" arr  0x%x \n",arr);
//arr 指针 悬空指针

}
