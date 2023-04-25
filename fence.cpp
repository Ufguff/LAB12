void fence(int x, int y);

void fence(int x, int y){
   setfillstyle(SOLID_FILL, BROWN);
   bar(x, y, x+20, y+130);
   bar(x+30, y, x+50, y+130);
   bar(x-10, y+22, x+60, y+27);
   bar(x-10, y+103, x+60, y+108);
}