#include <stdio.h>
#include <malloc.h>
#include <cdoex.h>
void test01(){
    int c[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int *p = c;
    int a;
//    数组c  只能够读 不能写 read only
//    c = &a;
//    数组是一个比较特殊的额指针
    printf("%d \n",*(c+1));
    printf("%p\n",c);

//    printf(" p  %p\n",&p);
    printf("c  %p\n",&c);
    printf("%p\n",&c[0]);
//数组=指针   指针=数组
    for (int i = 0; i < 8; i++) {
        printf("%d \n", p[i]);
//        printf("%d \n", *(p + i));  //每加一就相当于加了四个字节
//        printf("%d \n", c[i]);
//        printf("%d \n", *(c + i));
    }
}
//数组  指针
int main() {
    test01();
    return 0;


}
