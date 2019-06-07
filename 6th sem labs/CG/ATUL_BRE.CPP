#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
    int gd=DETECT, gm;
     int dx, dy, p, x, y,x1, y1, x2, y2;

   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    /*
    printf("Enter first point: ");
    scanf("%d%d", &x1, &y1);

    printf("Enter second point: ");
    scanf("%d%d", &x2, &y2);


    dx=x2-x1;
    dy=y2-y1;

    x=x1;
    y=y1;

    p=2*dy-dx;

    while(x<x2)
    {
	if(p>=0)
	{
	    putpixel(x,y,7);
	    y=y+1;
	    p=p+2*dy-2*dx;
	}
	else
	{
	    putpixel(x,y,7);
	    p=p+2*dy;
	}
	x=x+1;
    }
    */
    putpixel(100,100,7);
    putpixel(101,100,7);
    putpixel(100,101,7);
    putpixel(101,101,7);
    getch();
    closegraph();
    return 0;
}
