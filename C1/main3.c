#include <stdio.h>
#include <malloc.h>
#include <cdoex.h>
void test01(){
    int a = 0xaabbccdd;
    int *p1 = &a;

    char *p2 = &a;

    printf("%x\n", *p1);
    printf("%x\n", *p2);

//    地址
    printf("p1  =%d\n", p1);
    printf("p2  =%d\n", p2);

//  指针类型决定步长
    printf("p1  =%d\n", p1+1);
    printf("p2  =%d\n", p2+1);
}
int main() {
    test01();
    return 0;


}
