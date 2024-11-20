#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

void main() {
    int gd = DETECT, gm;
    int x1, y1, x2, y2;
    int x1_new, y1_new, x2_new, y2_new;
    float angle, radian;

    printf("Enter the coordinates (x1, y1, x2, y2): ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    printf("Enter the rotation angle in degrees: ");
    scanf("%f", &angle);

    radian = angle * (M_PI / 180.0);  // Convert angle to radians

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Draw original line
    line(x1, y1, x2, y2);

    // Rotate points
    x1_new = x1 * cos(radian) - y1 * sin(radian);
    y1_new = x1 * sin(radian) + y1 * cos(radian);
    x2_new = x2 * cos(radian) - y2 * sin(radian);
    y2_new = x2 * sin(radian) + y2 * cos(radian);

    // Draw rotated line
    line(x1_new, y1_new, x2_new, y2_new);

    getch();
    closegraph();
}

/*  Enter the coordinates (x1, y1, x2, y2): 100 100 200 200
    Enter the rotation angle in degrees: 45 dont take 90 
*/