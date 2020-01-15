#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int gd=DETECT,gm;
 int an,na;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
// rectangle(80,10,600,400);
 settextstyle(GOTHIC_FONT,HORIZ_DIR,9);
 outtextxy(100,150,"BREAK IT");
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
 setcolor(GREEN);
 outtextxy(0,300,"enter correct radius to break the window");
// outtextxy(2,340,"HINT:window weak only at top-centre");
 outtextxy(2,400,"press any key to continue");
 getch();
 cleardevice();
// rectangle(80,0,600,400);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
 outtextxy(100,150,"LEVEL 1");
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
 outtextxy(2,340,"HINT:window weak only on top");
 outtextxy(2,400,"press any key to continue");
 getch();
 cleardevice();
 rectangle(80,0,600,400);
 setcolor(YELLOW);
 line(100,250,150,290);
 line(200,250,150,290);
 line(150,290,150,345);
 circle(150,230,30);
 rectangle(500,200,575,300);
// setfillstyle(HATCH_FILL,BLUE);
// floodfill(175,210,15);
// arc(150,250,0,180,60);
 line(537,200,537,300);
 line(500,250,575,250);
 setcolor(RED);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
 outtextxy(80,410,"enter the radius ");
 scanf("%d",&an);
 arc(150+an,200,0,180,an);
 getch();
 cleardevice();
 if(an>=170&&an<=213)
  {
  settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
  outtextxy(200,200,"EXCELLENT");
  setcolor(GREEN);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
  outtextxy(200,300,"You entered next level ");
  outtextxy(200,350,"press any key to continue ");
  getch();
  cleardevice();
  settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
  outtextxy(100,150,"LEVEL 2");
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
  outtextxy(2,340,"HINT:window breaks only at top-centre");
  outtextxy(2,400,"press any key to continue");
  getch();
  cleardevice();
  rectangle(80,0,600,400);
  setcolor(YELLOW);
  line(100,250,150,290);
  line(200,250,150,290);
  line(150,290,150,345);
  circle(150,230,30);
  rectangle(500,200,575,300);
  line(537,200,537,300);
  line(500,250,575,250);
  setcolor(RED);
  settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
  outtextxy(80,410,"enter the radius");
  scanf("%d",&na);
  arc(150+na,200,0,180,na);
  getch();
  cleardevice();
  if(na==194)
  {
  settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
  outtextxy(200,200,"YOU WON");
  }
  else
  {
  settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
  outtextxy(200,200,"YOU LOST");
  }
  }
 else
 {
  settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
  outtextxy(200,200,"YOU LOST");
 }
 getch();
 cleardevice();
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
 outtextxy(200,200,"GAME OVER");
 getch();
 closegraph();
}
