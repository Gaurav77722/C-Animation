#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>
void rain()
{       int i,j;


	for(j=i;j<300;j++)
	{
		outtextxy(random(600),random(400),"/");

	}


}

void clouds(int y,int z)
{
	int r=50;

		arc(z,y,45,135,r);
		arc(z+50,y,45,135,r);
		arc(z+100,y,45,135,r);
		arc(z,y,135,225,r);
		arc(z+50,y,135+90,225+90,r);
		arc(z,y,135+90,225+90,r);
		arc(z+100,y,135+90,225+90,r);
		arc(z+100,y,315,45,r);
		setcolor(WHITE);

}

void sun()
{
   circle(110,100,40);
   setfillstyle(SOLID_FILL,YELLOW);
   floodfill(101,101,YELLOW);
}

void sedperson()
{
    int i;
    circle(60+i,350,10);         //face
    line(50+i,350,50+i,370);        //neck
    line(50+i,370,30+i,380);    //left hand
    line(50+i,370,70+i,380);    //right hand
    line(50+i,370,50+i,410);        //body
    //legs
    line(50+i,410,25+i,430);
    line(50+i,410,75+i,430);
}

void happerson()
{
    int i;
    circle(50+i,340,10);         //face
    line(50+i,350,50+i,370);        //neck
    line(50+i,370,30+i,380);    //left hand
    line(50+i,370,70+i,380);    //right hand
    line(50+i,370,50+i,410);        //body
    //legs
    line(50+i,410,25+i,430);
    line(50+i,410,75+i,430);
}

void rainbow()
{
    int x,y,k;



    y = getmaxy() / 2;

    for (k=30; k<150; k++)
    {
	delay(0);

	// selecting  color for making of rainbow
	setcolor(k/10);
		arc(400, y, 0, 180, k);
    }


}

void main()
{
    int gd=DETECT, gm;
    int j,i=0;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    while(!kbhit())
    {
	if(i<300)
	{
		sedperson();
		rain();
	}
	else
	{
		happerson();
		rainbow();
		sun();
		clouds(60,50);
	}
    i=i+20;
    if(i==650) i=0;
    delay(150);
    cleardevice();

    //Ground
    line(0,430,639,430);
    }
    getch();
    closegraph();

}