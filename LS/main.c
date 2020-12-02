#include <stdio.h>

int main() {


//    虚拟机 有 1 没有 2     肯定有   虚拟机 指针
//上帝视角  ，
    int p;//变量     1  2    4 5 6
    int a=10;
    int *p10 = &a;//p10  地址 0x0111121FFF
//指针类型  决定了  + 多少  =n * sizeof(指针类型)  1*1
    long *p1;//指针 单个指针变量
//    printf("p1 :%p \n", p1);
//    p1++;
//    printf("p1 :%p \n", p1);
    int p2[2];
    int *p4[4];
    int *p11 = p4;
    char **p12;
//指向类型
    int *ptr1;//int  4  char *ptr1  1  sizeof(指向的类型)

    int b = 10;
    int *x = &b;
    int **y = &x;
    char * * ptr;// 指向的类型     int *
    // 指向的类型     char *
//    数组指针    指针
//   1  8个字节  2  *p12 指针
    printf("p12--- :%d \n", sizeof(*y));

    int (*p5)[4];
//    一般情况从右向左结合
// 相领情狂
//    int *p5;
//这个指针的自身的类型是什么？指针指的类型是什么？该指针指向了哪里？
    int *p6;//指针类型 int *    指向的类型 int
    char *p7;//指针类型 char *   char
    int **p8;//指针类型 int *  4  1 8个字节  2

    int (*p9)[4];  //int()[3]
    printf("Hello, World!\n");



    return 0;
}
