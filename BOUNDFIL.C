#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void b_fill(int x, int y, int f, int b) {
    int c = getpixel(x, y);
    if ((c != b) && (c != f)) {
        putpixel(x, y, f);
        delay(10);
        b_fill(x + 1, y, f, b);
        b_fill(x, y + 1, f, b);
        b_fill(x - 1, y, f, b);
        b_fill(x, y - 1, f, b);
        b_fill(x + 1, y + 1, f, b);
        b_fill(x - 1, y - 1, f, b);
        b_fill(x - 1, y + 1, f, b);
        b_fill(x + 1, y - 1, f, b);
    }
}

void main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    rectangle(50, 50, 100, 100);
    b_fill(65, 55, 4, 15);
    getch();
    closegraph();
}