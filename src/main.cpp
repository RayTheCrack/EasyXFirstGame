#include <easyx.h>	// 引用 EasyX 头文件
#include <conio.h>  // Windows 控制台输入输出头文件

int main()
{
    initgraph(640, 480);    // 创建绘图窗口，大小为 640x480 像素
    circle(200, 200, 100);  // 画圆，圆心(200, 200)，半径 100
    _getch();               // 按任意键继续（控制台非缓冲输入，对应缓冲输入中的 getchar）
    closegraph();           // 关闭绘图窗口
    return 0;
}
