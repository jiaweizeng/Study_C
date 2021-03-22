#include <iostream>
using namespace std;
using namespace std;
float temp;
float fn1(float r) {
    float temp = (float) (r * r * 3.14);
    return temp;

}
//常量引用    const  &

//float a = fn1(10);  float &c = fn1(10)
float &fn3(float r) {//定义函数fn2，它以引用方式返回函数值
    float a = 0.0;
    a = (float) (r * r * 3.14);
    return a;
}
float & fn2(float r) {
     temp = (float) (r * r * 3.14);
//    float &b = temp;
    return temp;
}
//如果函数返回是&，内部可以直接return(float)(r*r*3.14)吗？
 int main(){
    float a = fn1(10.0);
    float cc = 1;
    float &d1 = cc;
    float  d = fn1(10.0);
//    float b = fn2(100.0);
    float &e = fn3(50.0);//错误
//    cout << "a=" << a<<" b=" << b<< endl;
}
