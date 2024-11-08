//MID PT CIRCLE
#include <graphics.h>
#include <stdio.h>

void drawCircle(int xc, int yc, int x, int y) {
    // Using four-way symmetry, draw points in the four quadrants
    putpixel(xc + x, yc + y, 3); // Quadrant 1
    putpixel(xc - x, yc + y, 3); // Quadrant 2
    putpixel(xc + x, yc - y, 3); // Quadrant 3
    putpixel(xc - x, yc - y, 3); // Quadrant 4
}

void midpointCircle(int xc, int yc, int radius) {
    int x = 0, y = radius;
    int p = 1 - radius; // Initial decision parameter

    // Initial points in four quadrants
    drawCircle(xc, yc, x, y);

    // Continue until x crosses y
    while (x < y) {
        x++;

        if (p < 0) {
            p += 2 * x + 1;
        } else {
            y--;
            p += 2 * (x - y) + 1;
        }

        // Draw the points for the new (x, y) using four-way symmetry
        drawCircle(xc, yc, x, y);
    }
}

int main() {
    int gd = DETECT, gm;
    int xc, yc, radius;

    // Initialize graphics mode
    initgraph(&gd, &gm, "");

    printf("Enter center of the circle (xc, yc): ");
    scanf("%d %d", &xc, &yc);
    printf("Enter radius of the circle: ");
    scanf("%d", &radius);

    // Draw the circle
    midpointCircle(xc, yc, radius);

    // Keep the output window open
    getch();
    closegraph();
    return 0;
}
