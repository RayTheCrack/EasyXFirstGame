#include <easyx.h>	// 引用 EasyX 头文件
#include <conio.h>  // Windows 控制台输入输出头文件
#include <windows.h>
#include "../inc/Message.h"
int main()
{
    initgraph(640, 480);    // 创建绘图窗口，大小为 640x480 像素
    Coordinate mouse;
    while(true)
    {
        PeekMouseMessage();
        if(IsKeyDown(VK_Q))
        {
            break;
        }
        mouse = GetMouseCoordinate();

        circle((int)mouse.x,(int)mouse.y,10);
    }
    closegraph();           // 关闭绘图窗口
    return 0;
}
