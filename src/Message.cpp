#include "../inc/Message.h"
#include <easyx.h>
static Coordinate mouse;

void PeekMouseMessage()
{
    ExMessage msg;

    while(peekmessage(&msg, EX_MOUSE))
    {
        mouse.x = msg.x;
        mouse.y = msg.y;
    }

}

bool IsKeyDown(int key)
{
    return (GetAsyncKeyState(key) & 0x8000);   
}//检测鼠标是否被按下
Coordinate GetMouseCoordinate()
{
    return mouse;
}