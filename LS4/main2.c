#include <stdio.h>



int main() {
//    10个字节
    int a[3][4] = {999, 2, 3, 4, 5,8, 7, 8, 9, 10, 11, 12};

//    a  二维数组中第一行的首地址
//    &a 整个二维数组的首地址
//    *a  第一个元素的首地址

    printf("&a:%p\n", &a);
    printf("a:%p\n", a);

    printf("*a:%p\n",*a);
    printf("--------1111---------\n");
    printf("*&a=%d\n ", sizeof(*&a));//指向区域的大小
    printf("a=0x%x ",  &a );
    printf("a+1=0x%x\n ", &a+1);


    printf("--------2222---------\n");//3*12
    printf("*a=%d\n ", sizeof(*a));
    printf("a=0x%x ",  a );
    printf("a+1=0x%x\n ", a+1);
    printf("-------3333----------\n");
    printf("**a=%d\n ", sizeof(**a));
    printf("a= %d ",  **a );
    printf("a+1= %d\n ", **a+1);//相当于获取到**a的值，然后对这个值加1

//   数组取值
    printf(" value %d\n ", a[1][0]);

//    指针法 数组指针  p  一行的首地址     &p 整个数组    *p 单个元素  p + 1
//** 数组元素 p
    int (*p)[4]=a;
    printf(" value %d\n ", **(p + 1));

//    printf(" value %d\n ",*(*(p+1))+1);

//此时*(p+1)取出来的是一个地址值，地址值+1相当于加了8个字节，
// p又是一个int的二维数组，所以*(*(p+1)+1))相当于对取了第二个数组的首地址后向右移动了两个int的位置
//再取此位置的值
    printf(" value %d\n ",*(*(p+1)+1));
    printf(" value %d\n ",*(*(p+1))+1);

//    混着用
// 数组 执政
//
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++)
            printf("value :%d\n",*(*(p+i)+j));
    }


    return 0;
}



