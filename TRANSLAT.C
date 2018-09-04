#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main(){
	int gd=DETECT,gm;
	int x1,y1,x2,y2,tx,ty;
	initgraph(&gd,&gm,"C:/TurboC3/BGI");
	printf("Enter Coordinates (x1,y1 & x2,y2) : \n");
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	printf("Enter translating factor tx & ty :");
	scanf("%d %d",&tx,&ty);
	line(x1,y1,x2,y2);
	x1=x1+tx;
	y1=y1+ty;
	x2=x2+tx;
	y2=y2+ty;
	setcolor(BLUE);
	line(x1,y1,x2,y2);
	getch();
}