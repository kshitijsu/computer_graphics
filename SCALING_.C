#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main(){
	int gd=DETECT,gm;
	int x1,y1,x2,y2,sx,sy;
	initgraph(&gd,&gm,"C:/TurboC3/BGI");
	printf("Enter Coordinates (x1,y1 & x2,y2) : \n");
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	printf("Enter scaling factor sx & sy :");
	scanf("%d %d",&sx,&sy);
	line(x1,y1,x2,y2);
	x1=x1*sx;
	y1=y1*sy;
	x2=x2*sx;
	y2=y2*sy;
	setcolor(BLUE);
	line(x1,y1,x2,y2);
	getch();
}