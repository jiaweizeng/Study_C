#include <iostream>
using namespace std;
//泛型 这个说法  函数模板=泛型

//类上 使用
template <typename T>
class A{
public:
    T t;
public:
    A(T t){
        this->t = t;
    }
//变量 1  变量引用2
    T &getT(){
      //  T t1;//可以 1 不可以  2
        return t;
    }

};
int main() {

    A<int> a(100);
    cout << "a:" << a.getT() << " age: " <<  endl;
    return 0;
}
