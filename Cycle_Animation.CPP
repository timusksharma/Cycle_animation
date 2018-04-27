#include<graphics.h>
#include<conio.h>
#include<dos.h>

void main()
{
int gd=DETECT,gm;
int i=-300,j=0;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");

 //setbkcolor(9);
 
while(1)
{
setcolor(4);
setlinestyle(0,1,3);
line(0,400,640,400);
line(0,402,640,402);

setlinestyle(0,1,1);
line(600,200,600,400);
line(638,200,638,400);

setfillstyle(1,8);
line(600,200,638,200);

floodfill(610,205,4);
line(3,200,3,400);
line(40,200,40,400);

line(3,200,40,200);
floodfill(8,210,4);

setfillstyle(7,8);
arc(80+i,375,0,360,25);

setcolor(8);
arc(80+i,375,0-j,100-j,26);
arc(80+i,375,120-j,200-j,26);
arc(80+i,375,220-j,340-j,26);

arc(80+i,375,0-j,100-j,27);
arc(80+i,375,120-j,200-j,27);
arc(80+i,375,220-j,340-j,27);

arc(80+i,375,0-j,100-j,28);
arc(80+i,375,120-j,200-j,28);
arc(80+i,375,220-j,340-j,28);

arc(80+i,375,0,360,29);
arc(80+i,375,0,360,30);

setcolor(4);

floodfill(84+i,370,4);
line(110+i,325,85+i,380);
line(85+i,380,145+i,380);
line(145+i,380,160+i,325);
line(110+i,325,160+i,325);
line(110+i,325,145+i,380);
line(135+i,315,110+i ,325);
line(145+i,380,165+i,385);
 //leg
line(165+i,385,180+i,325);
line(165+i,385,230+i,325);
line(230+i,325,180+i,325);
line(260+i,380,230+i,325);

//setfillstyle(4,14);
arc(260+i,375,0,360,25);

setcolor(8);
arc(260+i,375,0-j,100-j,26);
arc(260+i,375,120-j,200-j,26);
arc(260+i,375,220-j,340-j,26);

arc(260+i,375,0-j,100-j,27);
arc(260+i,375,120-j,200-j,27);
arc(260+i,375,220-j,340-j,27);

arc(260+i,375,0-j,100-j,28);
arc(260+i,375,120-j,200-j,28);
arc(260+i,375,220-j,340-j,28);

arc(260+i,375,0,360,29);
arc(260+i,375,0,360,30);

floodfill(264+i,370,4);

setcolor(4);
line( 260+i,380,235+i,380);
line(135+i,315,160+i,325);
line(135+i,315,135+i,275);
arc(150+i,275,0,180,15);
line(180+i,325,135+i,305);
line(160+i,315,160+i,280);
line(160+i,290,190+i,290);
line(165+i,276,190+i,276);
line(190+i,276,190+i,290);

setfillstyle(1,6);
circle(195+i,282,5);
floodfill(193+i,281,4);
line(230+i,325,200+i,282);

circle(150+i,235,15);
floodfill(155+i,230,4);

settextstyle(3,1,4);
setcolor(1);
outtextxy(595,210,"Stop!!");

setcolor(1);
outtextxy(2,210,"Start!!");

setcolor(5);
settextstyle(3,0,4);
outtextxy(20,10,"By");

//Emoji

setcolor(14);
circle(110,35,20);
circle(110,35,21);
circle(110,35,22);

arc(103,30,0,180,5);
arc(103,30,0,180,6);
arc(119,30,0,180,5);
arc(119,30,0,180,6);
ellipse(110,40,180,0,12,8);
ellipse(110,40,180,0,12,9);

setcolor(14);
circle(160,35,20);
circle(160,35,21);
circle(160,35,22);

arc(153,30,0,180,5);
arc(153,30,0,180,6);
arc(169,30,0,180,5);
arc(169,30,0,180,6);
ellipse(160,40,180,0,12,8);
ellipse(160,40,180,0,12,9);

if(i<=325)
{i=i+5;
j=j+15;
delay(50);
clearviewport();
 }
 else
 break;
}

getch();
closegraph();
}
