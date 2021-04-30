#include <iostream>
using namespace std;
//泛型 这个说法  函数模板=泛型

//类上 使用
template<typename T, typename R>
class Person {
public:
    Person(T name, R age) {
        this->m_Name = name;
        this->m_Age = age;
    }

    void showPerson() {
        cout << "a:" << this->m_Name << " age: " << this->m_Age << endl;
    }

    T m_Name;
    R m_Age;
};
int main() {
//    显示调度
    Person<string,int> p1("david", 18);//这样是错误 自动类型推导，类模板不可以使用，自动类型推导    18 char   int
    p1.showPerson();

    return 0;
}
