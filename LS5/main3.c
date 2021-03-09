#include <stdio.h>

int main() {
//javabean  声明 内部类
    struct Person {
        char  name;  //姓名 1
        int num;  //学号 4
        int age;  //年龄 4
        char group;  //所在学习小组 1
        float score;  //成绩  4
    } person1,person2;
    printf(" person1 %d ", sizeof(float));
    //64位的数据每次都是8个字节8个字节的存
    //name  num加起来已经五个字节了   剩余三个字节不够存group 会在第二个八个字节里面存group
    //以此类推   person1实际大小是20个字节
    //也说明栈空间存储不是完全连续的    但是数组是完全连续的
    //还要遵守最大字节的整数倍，比如Person里最大的字节的就是int，所以Person大小肯定是4的倍数
    //假如Person里面还有个Node结构体，Node结构体里面有double，那此时Person的大小肯定就是8的倍数
    printf(" person1 %d ", sizeof(person1));
    return 0;
}
