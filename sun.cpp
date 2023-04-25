#include "graphics.h"
#include "picture.hpp"

void sun() {
   static int x = 200, y = 100;
   setcolor(YELLOW);
   setfillstyle(SOLID_FILL, YELLOW);
   fillellipse(x, y, 50, 50);
}