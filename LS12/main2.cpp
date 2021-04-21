#include <iostream>
#include "string.h"
using namespace std;
//C++更细化了  访问方式
class Parent {
public:
    void printP() {
        cout << "Parent printP() " << endl;
    }
    virtual void printC() {
        cout << "Parent printC() " << endl;
    }
    Parent() {
        cout << "Parent Parent()" << endl;
    }
    //父类的拷贝构造函数  会1  不会 2
    Parent(const Parent& obj) {
        cout << "Parent const Parent()" << endl;
    }
};
class Child: public Parent{
public:
    void printC() {
        cout << "Child printC()" << endl;
    }
};
//通过指针传递        那么只会调用夫类型的方法
void howToPrint(Parent * p) {
    p->printP();
    p->printC();
}

void howToPrint1(Parent & p) {
    p.printC();
}
int main() {
//    Parent p1 ;
//    p1.printC();//Parent
//
//    //    //1-1 基类指针（引用）指向子类对象
//    cout << "-------------" << endl;
////    真实类型     继承过程
    Child c1;
    Parent pa = c1;
    pa.printP();
//    c1.printC();
//    c1.printP();
//
////    不一样的地方
//    cout << "-------------" << endl;
//    Parent *p = NULL;
////    p
//    p = &c1;
//    p->printC();
//    p->printP();
//    cout << "-------------" << endl;
//
//    howToPrint(&p1);
//    howToPrint(&c1);
//    cout << "-------------" << endl;
//
//
////    引用类型作为参数   java  子类的方法重写   调用重写
//    howToPrint1(p1);
//    howToPrint1(c1);
//子类  方法
    return 0;
}
