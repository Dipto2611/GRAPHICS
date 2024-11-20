#include <stdlib.h>
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <dos.h>

void dline(int x1, int y1, int x2, int y2)
{
    float x, y, xinc, yinc;
    int dx = x2 - x1;
    int dy = y2 - y1;
    int i, length;

    if (abs(dx) > abs(dy))
    {
        length = abs(dx);
    }
    else
    {
        length = abs(dy);
    }

    xinc = (float)dx / length;
    yinc = (float)dy / length;

    x = x1;
    y = y1;

    putpixel(x, y, 7);

    for (i = 0; i < length; i++)
    {
        x = x + xinc;
        y = y + yinc;
        putpixel(x, y, 7);
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    dline(20, 100, 70, 30);
    dline(70, 30, 120, 100);
    dline(20, 100, 120, 100);
    dline(20, 50, 70, 120);
    dline(70, 120, 120, 50);
    dline(20, 50, 120, 50);

    getch();
    closegraph();

    return 0;
}
