#include <iostream>
#include <stdlib.h>
#include <functional>
#include <graphics.h>

using namespace std;

struct point
{
  int x, y;
  point() : x(0), y(0) {}
  point( int _x, int _y ) : x(_x), y(_y) {}
  point operator + ( point o ) const { return point( x + o.x, y + o.y ); }
  point operator - ( point o ) const { return point( x - o.x, y - o.y ); }
};

int main()
{
  point origin, top;
  origin = {50, 100};
  top = {1250, 400};
  int gd = DETECT, gm;
  initgraph( &gd, &gm, "" );

  // make the reference grid
  setcolor(2); // yellow
  rectangle( origin.x, origin.y, top.x, top.y );
  for(int yy = 150; yy < top.y; yy += 50)
  {
    line( origin.x, yy, top.x, yy );
  }
  for(int xx = 150; xx < top.x; xx += 100)
  {
    line( xx, origin.y, xx, top.y );
  }

  point A = origin, B = origin;
  A.y = top.y;
  B.y = top.y;
  B.x += 10;
  for(int i = 0; B.x <= top.x; i++)
  {
    delay(200);
    B.y = (rand() % 150 + 100) % 150 + 100;
    B.y = abs(B.y);
    setcolor(3);
    circle( B.x, B.y, 5 );
    setcolor(3);
    line( A.x, A.y, B.x, B.y );
    A = B;
    B.x += 10;
  }

  getch();
  closegraph();
  return 0;
}


