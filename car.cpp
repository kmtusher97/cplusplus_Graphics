#include<graphics.h>
using namespace std;

void move_a_car()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    for(int i = 0, j = 0; i < 600; i++, j++)
    {
        line(32 + i, 420, 30 + i, 410);
        line(30 + i, 440, 32 + i, 420);

        line(30 + i, 410, 45 + i, 410);
        line(45 + i, 410, 75 + i, 400);

        line(75 + i, 400, 100 + i, 395);
        line(100 + i, 395, 135 + i, 397);
        line(135 + i, 397, 170 + i, 410);
        line(170 + i, 410, 185 + i, 413);
        line(185 + i, 413, 189 + i, 416);
        line(189 + i, 416, 191 + i, 420);
        line(191 + i, 420, 194 + i, 440);

        line(30 + i, 440, 50 + i, 440);
        circle(65 + i, 434, 17);
        circle(65 + i, 434, 14);
        line(80 + i, 440, 145 + i, 440);
        circle(160 + i, 435, 15);
        circle(160 + i, 435, 12);
        line(175 + i, 440, 195 + i, 440);
        line(0, 450, 650, 450);

        delay(20);
        cleardevice();
    }
    closegraph();
}

int main()
{
    move_a_car();
    return 0;
}



