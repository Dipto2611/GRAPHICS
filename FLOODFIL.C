#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void floodFill(int x, int y, int f, int b) {
    int c = getpixel(x, y);
    if (c == b) {
        setcolor(f);
        putpixel(x, y, f);
        delay(10);
        floodFill(x + 1, y, f, b);
        floodFill(x, y + 1, f, b);
        floodFill(x - 1, y, f, b);
        floodFill(x, y - 1, f, b);
        floodFill(x + 1, y + 1, f, b);
        floodFill(x - 1, y - 1, f, b);
        floodFill(x - 1, y + 1, f, b);
        floodFill(x + 1, y - 1, f, b);
    }
}

void main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    rectangle(50, 50, 100, 100);
    floodFill(51,51,4,0)
    getch();
}
    