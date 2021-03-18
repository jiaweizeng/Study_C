#include <stdio.h>
#include <malloc.h>

//c---->.o---->.exe
//java -class- jar
int main1() {
    printf("file write\n");
    //当前项目是LS6  实际运行的是LS6.exe  所以打开文件也是打开exe所在的目录
    FILE *p = fopen("./test/maniu.txt", "w");
    if (p) {
        fclose(p);
//        p 悬空指针
        p = NULL;
//        文件存在
    } else {

    }
    return 0;
}
//读文件
int main3() {
    printf("file read\n");
    FILE *p = fopen("./test/maniu.txt","r");

    if (p) {
        char c = fgetc(p);
        printf("char %c\n", c);
    }
    fclose(p);
//        p 悬空指针
    p = NULL;
}
//循环读文件
int main4() {
    printf("file read\n");
    FILE *p = fopen("./test/maniu.txt","r");
    if (p) {
        while (1) {
            char c = fgetc(p);
            if (c == EOF) {
                break;
            }
            printf("char %c\n", c);
        }
    }
    fclose(p);
//        p 悬空指针
    p = NULL;
}
//写文件
int main5() {
    printf("file write\n");

    FILE *p = fopen("./test/maniu.txt", "w");
    if (p) {
        fputc('a', p);
        fclose(p);
        p = NULL;
    }
}
//copy文件
int main6(){
    printf("file copy\n");
    FILE *p = fopen("./test/maniu.txt", "r");
    FILE *p1 = fopen("./test/write.txt", "w");
    if (p == NULL||p1 == NULL) {
        return -1;
    }
    while (1) {
        char c = fgetc(p);
        if (c == EOF) {
            break;
        }
        fputc(c, p1);
    }
    fclose(p);
    fclose(p1);
    p = NULL;
    p1 = NULL;
}
int cacl(int a,char b,int c){
    int result = 0;
    switch (b) {
        case '+':
            result = a + c;
            break;
        case '-':
            result = a - c;
            break;
        case '*':
            result = a * c;
            break;
        case '/':
            result = a / c;
            break;
    }

    return result;
}

int main() {
    printf("file copy\n");
    FILE *p = fopen("./test/maniu.txt", "r");

    if (p) {

        while (1) {
            char buffer[100] = {0};
            fgets(buffer, sizeof(buffer), p);

            int a = 0;
            char b = 0;
            int c = 0;
            sscanf(buffer, "%d%c%d", &a, &b, &c);
//            printf("a %d  b %c c %d\n", a, b, c);
            printf("result %d \n ", cacl(a, b, c));
            if (feof(p)) {
                break;
            }
        }
        fclose(p);
        p = NULL;
    }
// 字符串读写       二进制的读写
//视频文件  声音   写到
//剪影        视频 --》音频 pcm--》
}

