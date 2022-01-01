#include<graphics.h>

void drawHeart();
void drawText();
void baseBox();
void man();
void girl();
void twinkle();

void drawHeart()
{
	line(50,349,550,349);
	ellipse(245,250,60,250,120,165);
	ellipse(355,250,280,480,120,165);
	setfillstyle(1,RED);
	floodfill(240,250,WHITE);
}

void drawText()
{
	settextstyle(10,0,5);
	setcolor(RED);
	outtextxy(245,370,"Happy");
	outtextxy(175,410,"Anniversary");
	setcolor(WHITE);
}

void baseBox()
{
	setfillstyle(9,LIGHTBLUE);
	setcolor(YELLOW);
	rectangle(50,350,550,500);
	floodfill(100,400,YELLOW);
	setcolor(WHITE);
}

void man() 
{
	circle(250,230,20);
	line(250,250,250,348);
	line(250,348,200,320);
	line(200,320,195,348);
	line(250,290,300,280);
	line(295,270,295,285);
	circle(295,265,5);
}

void girl()
{
	circle(350,180,20);
	line(350,200,350,348);
	line(350,240,310,250);
	line(350,280,370,340);
}

void twinkle()
{
	int x=300,y=250,c=0,i=1;
	while(!kbhit())
	{
		putpixel(x+rand()%300,y+rand()%240,c+rand()%16);
		putpixel(x-rand()%300,y+rand()%240,c+rand()%16);
		putpixel(x+rand()%300,y-rand()%240,c+rand()%16);
		putpixel(x-rand()%300,y-rand()%240,c+rand()%16);
		man();
		girl();
		drawText();
	}
}

int main()
{
	initwindow(610,600);
	drawHeart();
	man();
	girl();
	baseBox();
	drawText();
	twinkle();
	return 0;
}
