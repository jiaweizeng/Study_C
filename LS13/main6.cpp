#include <iostream>
using namespace std;
//泛型 这个说法  函数模板=泛型
template<class T1, class T2>
class Person {
public:
    Person(T1 name, T2 age) {
        this->m_Name = name;
        this->m_Age = age;
    }
    void showPerson()
    {
        cout <<" m_Name: " << this->m_Name << "   m_Age:" << this->m_Age << endl;
    }
public:
    T1 m_Name;
    T2 m_Age;
};

//List<T>     List<T>
void doWork(Person<string,int> &person){
    person.showPerson();
}
template <class  T1,class T2>
void doWork2(Person<T1,T2> &person){
    person.showPerson();
}
template<class T>
void doWork3(T &p){
    p.showPerson();
}

int main() {
//    显示调度
//C++   new
    Person<string,int> person("maniu", 99);
    doWork(person);
    doWork2(person);
    doWork3(person);
    return 0;
}
