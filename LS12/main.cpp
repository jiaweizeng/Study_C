#include <iostream>
//C++更细化了  访问方式
class Parent {
public:
    int name;// 名字
protected:
    int banck;//银行账户
private:
    int xifu;//媳妇

};


//: extends   C++多级
class Child: public Parent{

    void test() {
        this->name;
        this->banck;
//        this.xifu 不能够访问私有属性
    }
};
//派生的方式  private   public
class Child1: private Parent{

    void test() {
        this->name;
        this->banck;
//        this.xifu 不能够访问私有属性
    }
};

class Child2: protected Parent{

    void test() {
        this->name;
        this->banck;
//        this.xifu //不能够访问私有属性
    }
};
//私有集成   class Child3:  private  Parent
class Child3:  Parent{


};

int main() {
//    类外访问
    std::cout << "Hello, World!" << std::endl;
    Child child;
//    public
    child.name;
    Child3 child3;
//protect   privete 类访问 他的区别   public

    Child2 child2;
//    child2.banck;
//    child2.name;
//    child2.xifu;

//    child3.name;
//    child3.banck;
//    child3.xifu;
//
    return 0;
}
