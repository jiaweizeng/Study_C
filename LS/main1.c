#include <stdio.h>

int main() {
    char ch = 'a';
    char *cp = &ch;


    //作为右值
//
////ch 作为右值
//    char name = ch;
//    ch = 'b';
//---------ch---------------

//    printf("%p\n",cp);
//    printf("%p\n",&ch);
//    char *name = &ch;
//    printf("%c\n",*name);
//
//    //---------cp--右值------------ clion
//
//    char *cp1 = cp;
//
////    左值
//    cp = NULL;


//
//    printf("%p\n",cp);
//    printf("%p\n",cp1);


//    ---------------&cp-----------------参数 相当于 左值  取指向内容    cp
//    printf("%p\n",&cp);
////    右值
//
//    char **cp1 = &cp;
//
//    printf("%p\n",cp1);

//---------------*cp-------------------

//        这个是间接访问操作，也叫解引用指针

//    printf("a  %c\n",*cp);
//    printf("%c\n",ch);
//
////    右值
//
//    char name = *  cp;
//
//    *cp = 'y';


//---------------------*cp+1

    //作为右值
//    char name = *cp+1;
//    printf("%c\n",name);
//    printf("%c\n",*cp);   //还是字符'a'

//    int *p;
//    printf("%d\n",p);
//
//    //---------------------*(cp+1)
//    //作为右值
//    char name = *(cp+1);
//    printf("%c\n",name);

//---------------
    int *p; // 指针未初始化，此时 p 为野指针
    printf("p  0x%x\n", p);
    int *pi = NULL;// 指针未初始化，此时 p 为空指针

    {
        int i = 6;
        printf("---%p  ",&i);
        pi = &i; // 此时 pi 指向一个正常的地址
        *pi = 8; // ok
        printf("---%p  ", pi);
    }
// 由于 pi 指向的变量 i 已经销毁，此时 pi 即成了悬空指针
    int b = *pi;// i
    printf("---%p  ", pi);
    return 0;
/**
* ch
&ch
cp
&cp
*cp
*cp+1
*(cp+1)
++cp
cp++
*++cp
*cp++
++*cp
(*cp)++
++*++cp
++*cp++
 */
//    int *p = NULL;
//     *p = 0;
    return 0;
}
