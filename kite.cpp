#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<string.h>

int main()
{

int x=2,y=5,tx=5,ty=2;
int poly[10];
initwindow(800,600,"kite");

while(!kbhit()) {
for(int i=0;i<800;i++){
x += tx;
if(x > 200)
tx = -5;
if(x < 0 )
tx = 10;
y += ty;
if(y > 100)
ty = -10;
if(y < 0 )
ty = 10;

cleardevice();

         //man
        circle(20+i,250,20);
		line (20+i,270,20+i,340);
		//eye
		circle(27+i,248,1);
		//leg
		line (20+i,340,5+i,380);
		line (20+i,340,35+i,380);
		//hand
		line (20+i,290,40+i,300);
		line (40+i,300,60+i,270);
		//Road
		line (0,380,900,380);
    // structure of the kite color including tail and thread
	setcolor(BLACK);
    setbkcolor(GREEN);
    // for the movement of the kite 
    poly[0]=100+x+i;
    poly[1]=50+y;
    poly[2]=140+x+i;
    poly[3]=100+y;
    poly[4]=100+x+i;
    poly[5]=155+y;
    poly[6]=60+x+i;
    poly[7]=100+y;
    poly[8]=100+x+i;
    poly[9]=50+y;
    drawpoly(5,poly);
    setfillstyle(SOLID_FILL,RED);//fills the color inside the kite structure
    fillpoly(5,poly);
    setlinestyle(SOLID_LINE,1,3);// tail of the kite
   //rope
   line(100+x+i,155+y,100+x+i,180+y);
    line(100+x+i,155+y,110+x+i,180+y);
    line(100+x+i,155+y,90+x+i,180+y);
    setlinestyle(SOLID_LINE,1,3);//thread thickness that connects man and the kite
    line(60+i,270,100+x+i,90+y);
    line(100+x+i,90+y,130+x+i,100+y);
    line(100+x+i,90+y,70+x+i,100+y);
    line(100+x+i,90+y,100+x+i,70+y);

    delay(300);


   setlinestyle(SOLID_LINE,0,3);// road and man thickness

    setcolor(BLUE);
  setfillstyle(SOLID_LINE,BLUE);	
}

	while(!kbhit()) {

		delay(200);
	}
getch();
}
}
