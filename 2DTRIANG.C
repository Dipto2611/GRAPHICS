#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

void main() {
    int gd = DETECT, gm;
    int x1, y1, x2, y2, x3, y3;
    int x1_new, y1_new, x2_new, y2_new, x3_new, y3_new;
    float angle, radian;

    // Get the coordinates of the triangle
    printf("Enter the coordinates of the triangle (x1, y1, x2, y2, x3, y3): ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    // Get the angle of rotation in degrees
    printf("Enter the rotation angle in degrees: ");
    scanf("%f", &angle);

    // Convert angle to radians
    radian = angle * (M_PI / 180.0);  // Convert angle to radians

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Draw original triangle
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    // Rotate the vertices of the triangle
    x1_new = x1 * cos(radian) - y1 * sin(radian);
    y1_new = x1 * sin(radian) + y1 * cos(radian);
    x2_new = x2 * cos(radian) - y2 * sin(radian);
    y2_new = x2 * sin(radian) + y2 * cos(radian);
    x3_new = x3 * cos(radian) - y3 * sin(radian);
    y3_new = x3 * sin(radian) + y3 * cos(radian);

    // Draw rotated triangle
    printf("Rotated Triangle\n");
    line(x1_new, y1_new, x2_new, y2_new);
    line(x2_new, y2_new, x3_new, y3_new);
    line(x3_new, y3_new, x1_new, y1_new);

    getch();
    closegraph();
}
// tri cord - 200 100,100 200,300 200;
//angle- 45
