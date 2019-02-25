#include <iostream>
#include <stdlib.h>
#include <functional>
#include <graphics.h>
using namespace std;

void draw_circle( pair<int, int> center, int radius )
{
  int graph_driver = DETECT, graph_mode, err_code;

  initgraph( &graph_driver, & graph_mode, "");  // initialize graph

  err_code = graphresult();
  if( err_code != grOk )     // error occurred
  {
    cout << "Graphics Error : " << grapherrormsg(err_code) << "\n";
    return;
  }

  circle( center.first, center.second, radius );
  getch();   // wait
  closegraph();
}

int main()
{
  draw_circle( {200, 200}, 100 );

  return 0;
}
