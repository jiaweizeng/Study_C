#include <stdio.h>
#include <malloc.h>
#include <cdoex.h>
void test01(){
//指针是有类型的    int
    int *q;
    *q = 100l;
    char *p = NULL;
    strcpy(p, "1111"); //err
}
int main() {
    test01();
    return 0;
}
