#include <iostream>
using namespace std;
#include <string>
#include <string.h>
//泛型 这个说法  函数模板=泛型

//字符串
int main1() {
//    显示调度
//C++   new
    string s1();
    string s2("Hello");
    cout << "data:  " << s2 << endl;

    string s3(4, 'k');
    cout << "data:  " << s3 << endl;
//"david".substring(1,4)
    string s4("123456", 1, 4);

    cout << "data:  " << s4 << endl;
    return 0;
}
int main2(){
//    没有字符的构造函数
//    string s1('K');
//    string s2(123);

}


int main4(){
//    string  对象       封装了一个C字符串
    string s = "david";
//    常量指针  1  指针常量 2
//
    const char *arr=s.c_str();//C++字符串转换为  C字符串
//   *arr = "1q23"; 不允许

    printf("string: %s\n", arr);
    printf("string: %c\n", *(arr+1));
}
int main5(){
//    string  对象       封装了一个C字符串
    string s = "david";
//    常量指针  1  指针常量 2
//
    const char *arr=s.c_str();//C++字符串转换为  C字符串
//   *arr = "1q23"; 不允许

    printf("string: %s\n", arr);
    printf("string: %c\n", *(arr+1));
//    arr  垃圾
}
//url 全局 变量

// url

int main6(){
    char c[20];
    string s = "maniu";
    strcpy(c,s.c_str());
//c
}

//c_str()
int main7(){
//    C++
    string s1("123");
    string s2("maniu");
    s1.append(s2);
    cout << "data:  " << s1 << endl;
    s1.append(s2, 1, 3);//substring(1,3)

    cout << "data:  " << s1 << endl;
}

int main8(){
    string s1("david"),s2("99");
    cout << "s1:  " << s1 <<"   s2:  " << s2 << endl;
    string s3= s1.substr(2, 2);
    cout << "s3:  " << s3 <<"   s2:  " << s2 << endl;
}

int main9(){
    string s1("david"),s2("99");
    cout << "s1:  " << s1 <<"   s2:  " << s2 << endl;
//    引用  地址 1   变量2
    s1.swap(s2);
    cout << "s1:  " << s1 <<"   s2:  " << s2 << endl;
}
int main10(){
    string s1("Real Steel");
    s1.erase(1, 3); //删除子串(1, 3)，此后 s1 = "R Steel"
    cout << "s1:  " << s1 << endl;
    s1.erase(5); //删除下标5及其后面的所有字符，此后 s1 = "R Ste"
    cout << "s1:  " << s1 << endl;
}
int main11(){
    string s1("hello"),
    s2("hello, world");
    int n = s1.compare(s2);
    cout << "n:  " << n << endl;
//    比较长度
    n = s1.compare(0, 3, s2, 0, 1);


    cout << "n:  " << n << endl;
}

int main13()
{
    string s1("Source Code");
    int n;
//     string::npos 类静态变量     失败  npos =-1
    if((n=s1.find('u')) != -1){
//        查找成功
        cout << "u " << n << endl;
        cout <<s1.substr(n)<< endl;
    }

    if((n=s1.find('Source')) != -1){
//        查找成功
        cout << "u " << n << endl;
        cout <<s1.substr(n)<< endl;
    }

}
int main14()
{
    string s1("Real Steel");
    s1.replace(1, 3, "123456", 2, 4);
    cout << "s1 " << s1 << endl;

    string s2("Harry Potter");

    s2.replace(2, 3, 5, '0');
    cout << "s2 " << s2 << endl;

    int n = s2.find("OOOOO");  //查找子串 "00000" 的位置，n=2
    n = 2;
    s2.replace(n, 0, "XXX");
    cout << "s2 " << s2 << endl;
}
int main()
{
//    后面用的比较多    string  ---内存
// 路径   url
    string s1("Limitless"), s2("00");
//ArrayList.cpp  int  ->T
//布置的作业
//

}