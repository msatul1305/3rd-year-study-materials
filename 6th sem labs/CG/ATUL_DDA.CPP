#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main(){
	int d=DETECT,m;
	initgraph(&d,&m,"c:\\Turboc3\\bgi");
       //	ellipse(240,320,0,360,100,100);
	line(25,25,25,50);//AB
	line(25,50,50,50);//BC
	line(25,25,50,25);//AD
	line(50,25,100,10);//DK
	line(100,10,150,10);//KJ
	line(150,10,175,25);//JL
	line(200,25,250,25);//LI
	line(250,25,250,50);//IH
	line(250,50,200,50);//HG
	ellipse(75,50,0,180,25,25);//ellipse1
	circle(75,50,15);
	line(100,50,135,50);//EF
	ellipse(161,50,0,180,25,25);//ellipse2
	line(187,50,250,50);//GH
	circle(161,50,15);
     getch();
}