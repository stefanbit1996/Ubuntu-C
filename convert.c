#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    // 存储输入的摄氏温度
    int input = 0;

    // 判断是否输入1个参数
    if( argc != 2)
        return 1;

    // 注意 argv[0] 是执行的程序，argv[1] 是第1个参数
    input = atoi(argv[1]);

    // TODO：将输入的 input（摄氏温度）值转为华氏温度并打印输出
    float output;
    output = input * 1.8 + 32;
    printf("%f", output);
    return 0;
}

