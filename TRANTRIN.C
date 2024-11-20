#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int gd = DETECT, gm, errorcode;
    int x1, y1, x2, y2, x3, y3, dx, dy;

    printf("Enter the coordinates of the triangle: ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    printf("Enter translation co-ordinates: ");
    scanf("%d %d", &dx, &dy);

    line(x1 + dx, y1 + dy, x2 + dx, y2 + dy);
    line(x2 + dx, y2 + dy, x3 + dx, y3 + dy);
    line(x3 + dx, y3 + dy, x1 + dx, y1 + dy);

    getch();
    closegraph();
}