#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main(){
	int gd=DETECT,gm;
	double x1,y1,x2,y2,x3,y3,angle;
	double nx1,nx2,nx3,ny1,ny2,ny3;
	initgraph(&gd,&gm,"C:/TurboC3/BGI");
	printf("Enter Coordinates for x1,y1 & x2,y2 &  x3,y3 : \n");
	scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);\
	printf("Enter the angle:");
	scanf("%lf",&angle);

	setcolor(RED);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);

	angle=angle*3.14/180;

	nx1=x1*cos(angle)+y1*sin(angle);
	ny1=x1*sin(angle)-y1*cos(angle);
	nx2=x2*cos(angle)+y2*sin(angle);
	ny2=x2*sin(angle)-y2*cos(angle);
	nx3=x3*cos(angle)+y3*sin(angle);
	ny3=x3*sin(angle)-y3*cos(angle);

	setcolor(BLUE);
	line(nx1,ny1,nx2,ny2);
	line(nx2,ny2,nx3,ny3);
	line(nx3,ny3,nx1,ny1);


	getch();
}