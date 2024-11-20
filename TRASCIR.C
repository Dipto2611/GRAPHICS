#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <stdlib.h>
#include <math.h>

void main() {
    int gd = DETECT, gm;
    int x, y, dx, dy;

    printf("Enter the end points = x, y: ");
    scanf("%d %d", &x, &y);

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    circle(x, y, 100);

    printf("Enter the translation co-ordinates: ");
    scanf("%d %d", &dx, &dy);

    x = x + dx;
    y = y + dy;

    printf("Circle after translation\n");
    circle(x, y, 100);

    getch();
    closegraph();
}