#include <iostream>
void mySwapInt(int &a ,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}


void mySwapDouble(double &a, double &b)
{
    double temp = a;
    a = b;
    b = temp;
}
template <typename T>
void mySwap2(){
    T t;//声明  类型  分配不了内存
}
//方法泛型  类泛型
template<typename T>//typename  可以替换成 class
void mySwap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}
//void mySwap3(T &a, T &b){
//    T temp = a;
//    a = b;
//    b = temp;
//}
int main() {
    std::cout << "Hello, World!" << std::endl;
    int a = 10;
    int b = 20;
    char c = 'a';
//    显示调度
    mySwap<int>(a, b);
    //    隐式调度
//    mySwap(a, c);
//    Person person=10  显示1  隐式 2
    mySwap2();
    return 0;
}
