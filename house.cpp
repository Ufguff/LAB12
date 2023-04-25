#include"graphics.h"
void home(int x1, int y1, int x2, int y2, int r);
//==============================
void paint()
{
   home(800*5/16, 600*1/2, 800*11/16,600*5/6, 2);
}
//=======================================
void home(int x1, int y1, int x2, int y2, int r)
{
   setcolor(LIGHTGRAY);
   setfillstyle(SOLID_FILL, LIGHTGRAY);
   bar(x1,y1,x2,y2); 
   setcolor(BLACK);
   setfillstyle(SOLID_FILL, BLACK);
   bar(x1+30,y1+70,x2-220,y2-70);
   bar(x1+120,y1+70,x2-130,y2-70);
   setcolor(BROWN);
   setfillstyle(SOLID_FILL, BROWN);
   bar(x1+210,y1+110,x2-30,y2);
   setcolor(BLACK);
   setfillstyle(SOLID_FILL, BLACK);
   fillellipse(x1+220,y1+160,r,r);
   setcolor(WHITE);
   setfillstyle(SOLID_FILL, WHITE);
   bar(x1+35,y1+75,x2-247,y2-75);
   bar(x1+57,y1+75,x2-225,y2-75);
   bar(x1+125,y1+75,x2-157,y2-75);
   bar(x1+147,y1+75,x2-135,y2-75);
}