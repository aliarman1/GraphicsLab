#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
// User input for starting and ending points
    int x1, y1, x2, y2;
    cout<<"Enter starting point (x1,y1): ";
    cin>>x1>>y1;
    cout<<"Enter ending point (x2,y2): ";
    cin>>x2>>y2;
    int dx = x2 - x1;
    int dy = y2 - y1;
    float x = x1, y = y1;
// Calculate steps required for generating pixels
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
// Calculate increment in x & y for each steps
    float xInc = dx / (float) steps;
    float yInc = dy / (float) steps;
// Put pixel for each step
    for(int i = 0; i <= steps; i++)
    {
        putpixel(x, y, WHITE);
        x += xInc;
        y += yInc;
        delay(100);
    }
    getch();
    closegraph();
    return 0;
}
/*
Input:
Enter starting point (x1,y1): 100 100
Enter ending point (x2,y2): 200 300
*/
