#include <stdio.h>
#include <malloc.h>
#define David  99//宏变量
#define ADD(x,y) ((x)+(y))

int *get_str(){
    int  str[4]  = {10,120,19,20}; //栈区
//    int  *str  =malloc(16); //堆区
    return str;

}
int main() {
    //假如在栈里面创建的变量，出栈后会清空，被赋值为0，但是在堆区创建的出栈也不会被清空
    //在函数里面的代码块是不会进栈出栈的
    int *arr = get_str();
    printf("----> arr 0x%x",  arr);
    printf("%d ", *arr);

    return 0;
}
