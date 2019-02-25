#include <iostream>
#include <stdlib.h>
#include <graphics.h>

using namespace std;

struct point
{
  int x, y;
  point() : x(0), y(0) {}
  point( int _x, int _y ) : x(_x), y(_y) {}
};

void draw_line( point A, point B )
{
  int graph_driver = DETECT, graph_mode, err_code;

  initgraph( &graph_driver, &graph_mode, "" );   // initiate graph

  err_code = graphresult();

  if( err_code != grOk )
  {
    cout << "Error : " << grapherrormsg(err_code) << "\n";
    return;
  }

  setcolor(5);  // 5 = purple

  line( A.x, A.y, B.x, B.y );

  getch();   // wait
  closegraph();
}

int main()
{
  draw_line( {200, 20}, {300, 200} );
  return 0;
}
