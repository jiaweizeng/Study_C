#include <stdio.h>
#include <malloc.h>

typedef    struct {
    int a;//unsigned  无符号  正数
    int b;
} Person1;
void test01(){

//    Person1 *person1 = malloc(sizeof(Person1));
//    person1->a = 44;
//    person1->b = 22;
//    printf("Hello, World!  %d\n", sizeof(person1));
//    99地址  1    数据  2
    int *p;   //定义一个地址的变量          变量是空的
    int a = 10;//实体的变量
    p = &a;//把a 的地址值赋值给p

    int c = *p;//是取出指针变量的地址  所指向的 值
    // %d 是接收整型  %p 是接收地址值
    printf("  ------ %d\n",  c);
    printf("  ------ %p\n",  &a);

    printf("  ------ %p\n",  p);
    printf("  ------ %p\n",  &p);

//*  左边


    //64位的是8个字节，32位是4个字节
    printf("  ---指针大小--- %d\n", sizeof(p));

//    野指针
//     printf(" ---  %d", *p);


}
int main() {
    test01();
    return 0;


}
