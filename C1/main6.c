#include <stdio.h>
#include <malloc.h>
#include <cdoex.h>
 int tableSizeFor(int cap) {
    int n = cap - 1;
    n |= n >> 1;
    n |= n >> 2;
    n |= n >> 4;
    n |= n >> 8;
    n |= n >> 16;
    return  n + 1;
}
//数组指针  数组 存放的是指针类型
void test01(){
//    数组指针  数组存放着指针     数组=指针
    int a[] = {10,20};
    int b[]={30,10};
    int c[] = {10};
    int * arr[3] = {a, b, c};//整形指针


    int * arr1[3] = {10, 10, 10};//整形指针
//
//    printf("%p \n",arr);
//    printf("%p \n",arr+1);
    printf("%d \n",**arr);
    printf("%d \n",arr[1][1]);
}


//数组  指针
int main() {
    int a=tableSizeFor(33);
    printf("%d \n",a);
    return 0;
}
