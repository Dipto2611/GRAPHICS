#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <stdlib.h>
#include <math.h>

void main() {
    int gd = DETECT, gm;
    int x, y, radius, scaleFactor;

    printf("Enter the center coordinates (x, y) and radius of the circle: ");
    scanf("%d %d %d", &x, &y, &radius);

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    circle(x, y, radius);

    printf("Enter the scaling factor: ");
    scanf("%d", &scaleFactor);

    radius = radius * scaleFactor;

    printf("Circle after scaling\n");
    circle(x, y, radius);

    getch();
    closegraph();
}
