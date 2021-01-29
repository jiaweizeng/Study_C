#include <stdio.h>

int main() {


//    str、str1、str2都是在栈区   "hello"在常量池
    char str[5]={'h','e','l','l','o','\0' };
    char str1[5]="hello";   //编译器自动加 \0  所以不用手动加
    char *str2 = "hello";
//    *str2 = "david";  运行此代码报错   凡是常量池的值都是不能修改
    printf("str=%s\n", str);

    printf("str=%s\n", str);
    printf("str=%s\n", str1);
    printf("str=%s\n", str2);
    return 0;
}
