void man(int x, int y);

void man(int x, int y){
   setfillstyle(SOLID_FILL, BLACK);
   setcolor(BLACK);
   fillellipse(x, y, 10, 10);
   for(int i=-1; i<2; ++i){
      line(x+i, y, x+i, y+30);
      line(x, y+8+i, x-14, y+18+i);
      line(x, y+8+i, x+8, y+15+i);
      line(x+8+i, y+15+i, x+9+i, y+20+i);
      line(x, y+26+i, x-10, y+36+i);
      line(x-10, y+36+i, x-12+i, y+46+i);
      line(x+i, y+26+i, x+8+i, y+46+i);
   }
}