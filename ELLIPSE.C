#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    int x, y;
    float rx, ry, xc, yc;
    float d;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    printf("Enter the coordinates of x and y: \n");
    scanf("%f%f", &xc, &yc);
    printf("Enter the radius: \n");
    scanf("%f%f", &rx, &ry);

    d = (ry * ry) - (rx * rx * ry) + (0.25 * rx * rx);
    x = 0;
    y = ry;
    do
    {
	putpixel(xc + x, yc + y,7 );
	putpixel(xc - x, yc + y,7 );
	putpixel(xc + x, yc - y,7 );
	putpixel(xc - x, yc - y,7 );

	if (d < 0)
	{
	    x=x+1;
	    d = d + 2 * ry * ry * x + ry * ry;
	}
	else
	{
	    x=x+1;
	    y=y-1;
	    d = d + 2 * ry * ry * x - 2 * rx * rx * y + ry * ry;
	}
    } while (2 * ry * ry * x < 2 * rx * rx * y);

    d = (ry * ry * (x + 0.5) * (x + 0.5)) + (rx * rx * (y - 1) * (y - 1)) - (rx * rx * ry * ry);

    do
    {
	putpixel(xc + x, yc + y, 3);
	putpixel(xc - x, yc + y, 3);
	putpixel(xc + x, yc - y, 3);
	putpixel(xc - x, yc - y, 3);

	if (d > 0)
	{
	    y=y-1;
	    d=d- 2 * rx * rx * y + rx * rx;
	}
	else
	{
	    x=x+1;
	    y=y-1;
	    d=d- 2 * rx * rx * y - 2 * ry * ry * x + rx * rx;
	}
    } while (y != 0);
    getch();
    closegraph();
    return 0;
}