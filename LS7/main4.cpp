#include <iostream>
using namespace std;
int main1(){
//   引用：就是某一变量（目标）的一个别名，对引用的操作与对变量直接操作完全一样。
    int a = 10;
    int &b = a;//&  取址  &引用  david    吴彦祖  引用   节省内存
//
    printf("a:%d \n", a);
    printf("b:%d \n", b);
    printf("a:%p \n", &a);
    printf("b:%p \n", &b);
//    int *c = &a;
    b = 100;

    printf("a:%d \n", a);
    printf("b:%d \n", b);
}

void swap1(int p1, int p2) {
    int p = p1;
    p1 = p2;
    p2 = p;
}
void swap2(int *p1, int *p2) {
    int p = *p1;
    *p1 = *p2;
    *p2 = p;
}

// 纯指针   不断的取址  不断的 找到指向的内容
//引用第一个好处   不会给引用任何内存空间  引用

int  swap(int &p1, int &p2){
    int p = p1;//p1= *p1  p 引用  1  int变量  2
    p1 = p2;//*p1 = *p2;
    p2 = p;
}
int main3(){
    int a = 20, b = 40;
    cout << "a=" << a << ",b=" << b << endl;
//    swap2(&a, &b);
    int &d = a;
    swap(a, b);
    cout << "a=" << a << ",b=" << b << endl;
}

int main(){

    int a = 1;
    int &b = a;
    b = 2;
    cout << "a=" << a << endl;//2
    int c = 1;
//    常量引用=常量指针
    const int &d = c;
//    d=2
    c = 2;
}
