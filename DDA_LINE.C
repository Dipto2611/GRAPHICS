//DDA LINE SQ
#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>

void dline(int x1,int y1,int x2, int y2){
    int dx=x2-x1;
    int dy=y2-y1;

    float xinc,yinc,x,y;
    int i,len;

    if(abs(dx)>abs(dy)){
        len=abs(dx);
    }
    else{
        len=abs(dy);
    }
    xinc=(float)dx/len;
    yinc=(float)dy/len;

    x=x1;
    y=y1;

    putpixel(x,y,3);

    for(i=0;i<len;i++){
        x=x+xinc;
        y=y+yinc;

        putpixel(x,y,6);
    }

}

void main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

    dline(30,30,80,30);
    dline(30,30,30,80);
    dline(80,30,80,80);
    dline(30,80,80,80);

    getch();

    closegraph();

}