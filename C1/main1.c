#include <stdio.h>
#include <malloc.h>

typedef    struct {
    int a;//unsigned  �޷���  ����
    int b;
} Person1;
void test01(){

//    Person1 *person1 = malloc(sizeof(Person1));
//    person1->a = 44;
//    person1->b = 22;
//    printf("Hello, World!  %d\n", sizeof(person1));
//    99��ַ  1    ����  2
    int *p;   //����һ����ַ�ı���          �����ǿյ�
    int a = 10;//ʵ��ı���
    p = &a;//��a �ĵ�ֵַ��ֵ��p

    int c = *p;//��ȡ��ָ������ĵ�ַ  ��ָ��� ֵ
    // %d �ǽ�������  %p �ǽ��յ�ֵַ
    printf("  ------ %d\n",  c);
    printf("  ------ %p\n",  &a);

    printf("  ------ %p\n",  p);
    printf("  ------ %p\n",  &p);

//*  ���


    //64λ����8���ֽڣ�32λ��4���ֽ�
    printf("  ---ָ���С--- %d\n", sizeof(p));

//    Ұָ��
//     printf(" ---  %d", *p);


}
int main() {
    test01();
    return 0;


}
