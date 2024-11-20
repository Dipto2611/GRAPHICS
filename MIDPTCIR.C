#include <stdio.h>
#include <graphics.h>
#include <conio.h>

void main() {
    int gd = DETECT, gm;

    int i, n, x, y, xc, yc;
    float d;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    printf("Enter the radius: ");
    scanf("%d", &n);

    printf("Enter x and y coordinates of circle centre: ");
    scanf("%d %d", &xc, &yc);

    x = 0;
    y = n;
    d = 1.25 - n;

    do {
        if (d < 0) {
            x = x + 1;
            d = d + 2 * x + 1;
        } else {
            x = x + 1;
            y = y - 1;
            d = d + 2 * x - 2 * y + 1;
        }

        putpixel(xc + x, yc + y, 5);
        putpixel(xc - x, yc + y, 5);
        putpixel(xc + x, yc - y, 5);
        putpixel(xc - x, yc - y, 5);
        putpixel(xc + y, yc + x, 5);
        putpixel(xc - y, yc + x, 5);
        putpixel(xc + y, yc - x, 5);
	    putpixel(xc - y, yc - x, 5);
    } while (x < y);

    getch();
    closegraph();
}