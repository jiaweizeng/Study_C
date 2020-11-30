#include <stdio.h>
#include <malloc.h>
#include <cdoex.h>

//数组指针  数组 存放的是指针类型
void test01(){

    int a = 10;
    int b=20;
    int c = 30;
    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &c;
    int * arr[3] = {p1, p2, p3};//整形指针数组


    printf("%d \n", *arr[0]);//10
//    *arr  arr[0]    *（arr+1）  arr[1]
    printf("%d \n", **arr);
    char *aa = arr;
    printf("%d \n", *((int *)aa));
}
//数组  指针
int main() {
    test01();
    return 0;


}
