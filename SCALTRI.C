#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int gd = DETECT, gm, errorcode;
    int x1, y1, x2, y2, x3, y3;
    float sx, sy;
    printf("Enter the coordinates of the triangle (x1 y1 x2 y2 x3 y3): ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Draw the original triangle
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    printf("Enter scaling factors (sx, sy): ");
    scanf("%f %f", &sx, &sy);

    // Scale the triangle
    line(x1 * sx, y1 * sy, x2 * sx, y2 * sy);
    line(x2 * sx, y2 * sy, x3 * sx, y3 * sy);
    line(x3 * sx, y3 * sy, x1 * sx, y1 * sy);

    getch();
    closegraph();
}

//cord - 200 100,100 200,300 200
//scal cord- 2 2