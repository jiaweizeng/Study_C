#include <stdio.h>
#include <malloc.h>
#define David  99//宏变量
//((x)+(y))为什么要括号？因为在替换为对应源码的时候不会做优先级运算，比如ADD（10,30）*20 得到的运算结果是610=10+30*20
#define ADD(x,y) ((x)+(y))

//
const  int a;
//c 不行的    包名  main.c    不同文件
int test(){
    int c;
    int d;
    return c + d;
}
int main() {
    char buf[3] = "abc \0"; //防止一级指针越界  遇到0才会停止打印
    printf("buf:%s\n",buf);
    //定义四个变量abcd，C中内存分配是从高到低的，所以四个变量的地址值是A>B>C>D
//    int a = 10;//a
//    int b = 20;
//    int c = 30;
//    int d = 40;
////预处理  10+20*30
    {
        int c = 30;
        int b = 30;
        int d = 30;
//        系统回收
    }
    //频繁调用的代码块入栈出栈会影响性能，使用宏定义在 调用的时候会直接转换为对应的源码
//    printf("hong = %d\n", ADD(10, 20)*30);
//    printf("b = %d\n", &b);
//    printf("c = %d\n", &c);
//    printf("d = %d\n", &d);
//
//
//    int *arr = malloc(16); //在堆中定义的变量，里面的引用是由低到高的  与栈相反
//    for (int i = 0; i < 4; ++i) {
//        printf(" arr   %p\n", (arr + i));
//    }
//    test();
//    int f;
    return 0;
}
