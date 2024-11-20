# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# include <graphics.h>

void main(){

    int x1,y1,x2,y2;
    int x,y;
    int dx,dy;
    int gd=DETECT,gm;
    int p; //initial decision parameter

    

    printf("x1,y1,x2,y2: ");
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

    dx=abs(x2-x1);
    dy=abs(y2-y1);

    p=2*dy-dx;

    x=x1;
    y=y1;

    while(x<=x2){
        putpixel(x,y,7);
        x++;
        if(p<0){
            p = p+2*dy;
        }else{
            y++;
            p=p+2*(dy-dx);
        }
    }

    getch();
    closegraph();

}