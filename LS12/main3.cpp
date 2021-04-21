#include <iostream>
#include "string.h"
using namespace std;
//C++更细化了  访问方式 Parent1   1个字节   不会因为你增加了 普通函数  而增加内容
class Parent1{
private:
    int * ptvtabl;
    void speak(){
    }
    void speak1(){
    }
};
//延申java   多态    函数表  C++  8  =指向一个虚寒函数数组的 指针 int *
class Parent {
private:
    int a;
protected:
    int b;
//    纯虚函数     virtual void  speak()=0  必须要让子类实现   虚函数virtual void  speak(){}
//    virtual void f() { cout << "Parent::f" << endl; }
//    virtual void g() { cout << "Parent::g" << endl; }
//    virtual void h() { cout << "Parent::h" << endl; }
};

class Child: public Parent{
public:

};

int main() {
//  1  Child =1      12  2
//  1  1
    cout << "size "<<sizeof(Child) << endl;

//  找到 虚函数表中的元素   *(int*)(&b)   虚函数表的第一个元素
// 指针   派生
//    Child* child =  new Child();
//    Parent* parent = child;
//    parent->speak();

    Parent b;
    typedef void (*func)(void);
    func func1 = NULL;
    cout << "adress:   " <<(int*)(&b)  << endl;
    cout << " method adress:  " << (int*)*(int*)(&b)<< endl;
    func1 = (func)*((int*)*(int*)(&b));
    func1();
    return 0;
}
