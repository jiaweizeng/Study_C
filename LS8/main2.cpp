#include <iostream>
using namespace std;
#include "include/Maniu.h"
//  调用出错 ----》不算重载
//函数指针----》避免 二义性
//void test(int  a){//int 和int &冲突的
//    cout << "int a: " << a << endl;
//}
void test2(int a, int b = 10) {
    cout << "int a: " <<  a << "  int b: " <<  b<< endl;
}
//void test2(int a, int b = 10) {
//    cout << "int a: " <<  a << "  int b: " <<  b<< endl;
//}
//test 编译不通过

// 编译的时候   不报宏     调用时  没有问题
//重载
//test（10） 二义性
void test2(int  a){
    cout << "int a: " <<  a << endl;
}
void test2(int&  a){//int 和int &冲突的
    cout << "int&  a: " << a << endl;
}
//引用      常量引用
void test(int&  a){//int 和int &冲突的
    cout << "int&  a: " << a << endl;
}
void test(const int&  a){//int 和int &冲突的
    cout << "const int a: " << a << endl;
}
/**
 *
 *
 * @param a
 */
void test(char *a){
    printf("c: %c,", *a);
}
void test(const char *a){
    printf("c: %c,", *a);
}
//void test( char * const a){
//    printf("c: %c,", *a);
//}
//void test2(char *a,Context=null){
//    printf("c: %c,", *a);
//}

//引用
//不算重载  指针常量  指向常量的指针
//void test(int * const   a){
//    cout << "const  int a: " << a << endl;
//}
/**
 *
 *
 * 算重载  常量指针  指向常量的指针
 * 是指指向常量的指针，顾名思义，就是指针指向的是常量，
 */
void test(const  int * a){
    cout << "const  int a: " << a << endl;
}
/**
 * 算的1  不算2
 * void test(const  int * a){
    cout << "int a: " << a << endl;
}
 */
//void test(int& a){
//    cout << "int& a: " << a << endl;
//}
/**
 *
 *
 void test(int& a){
    cout << "int a: " << a << endl;
}
 * @param a
 * @param b
 */
//引用      int  C++独有的重载函数
//void test(int a, int b) {
//    cout << "int a: " << a << endl;
//}

int main1() {
//    调用的哪个类型 不允许出现二义性
    int b = 10;
    int *a = &b;
    test( a);
    test("C");
//    int &b = a;
//    test(b);

    int d = 10;
    int &e = d;
//    普通引用
    test(e);
//    常量应用
    const int &f = d;

    test(f);

    test(10);
    return 0;
}
void (*myFunc2)(int a, int b);
void (*myFunc3)(int a, int b);
typedef void (*myFuncTest)(int a, int b);
typedef void (*myFuncTest2)(int a);
typedef void (*myFuncTest4)(int& a);
typedef void (*myFuncTest3)(char *);
int main() {
//    *myFuncTest 函数指针类型
//myFuncTest  函数类型
    myFuncTest  func = test2;
    func(10, 20);
    myFuncTest2 func2 = test2;
    func2(100);
    myFuncTest4 func4 = test2;
    func2(100);
    int a = 10;
    int &f = a;
    func4(f);//.==func4(a)
//    堆区1  栈区  2 maniu栈区
    Maniu *maniu = new Maniu;
    maniu->setAge(18);
    maniu->getAge();
    cout << "age int a: " <<maniu->getAge()<< endl;
//    func3("C");
//    test2(10);
}
